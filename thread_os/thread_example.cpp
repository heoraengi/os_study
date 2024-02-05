#include<iostream>
#include<unistd.h>
#include<pthread.h>
using namespace std;

void *f1(void *arg){
    long t_id = (long int) pthread_self();
    cout<< "프로세스 id : " << getpid() << endl;
    cout<< "스레드 id : " << t_id << endl;
    return NULL;
}
int main(){
    // thread id
    pthread_t t1;
    pthread_t t2;
    pthread_t t3;

    // pthread_create (스레드 식별자, 스레드 속성 설정 객체, 스레드가 실행할 함수 입력, 함수에 전달할 인수)
    pthread_create(&t1, NULL, f1, NULL);
    pthread_create(&t2, NULL, f1, NULL);
    pthread_create(&t3, NULL, f1, NULL);

    // 스레드가 종료될 때까지 호출 쓰레드를 정지 시킴
    pthread_join(t1, NULL);
    pthread_join(t2, NULL);
    pthread_join(t3, NULL);
    return 0;
}

// 출력결과
// 스레드 id는 모두 다르지만 서로 같은 프로세스 아이디를 공유함
// 프로세스 id : 21446
// 스레드 id : 140737348191808
// 프로세스 id : 21446
// 스레드 id : 140737339799104
// 프로세스 id : 21446
// 스레드 id : 140737331406400