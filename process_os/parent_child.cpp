// 계층적 구조로 부모, 자식 프로세스 생성해보기
#include<iostream>
#include<unistd.h>
using namespace std;

int main(){
    if (fork()==0){
        if (fork()==0) {
            cout << "자식의 자식 pid : " << getpid() << endl;
        }else {
            cout << "자식 1 pid : " << getpid() << endl;  
        }
    }
    else {
        if (fork()==0) {
            cout << "자식 2 pid : " << getpid() << endl;
        }else {
            cout << "부모 pid : " << getpid() << endl;  
        }
    }
    return 0;
}

// 출력결과
// fork()는 부모 프로세스의 복사본을 만드는 것이기에 
// 자식 프로세스도 동일한 작업을 할 수 있음
// 부모 pid : 10010
// 자식 pid : 10014
// 10010 : 실행합니다
// 10014 : 실행합니다

