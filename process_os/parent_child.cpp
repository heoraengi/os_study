// 자식 프로세스 출력하기
#include<iostream>
#include<unistd.h>
// unistd.h는 운영체제 API에 대한 액세스를 제공함
using namespace std;

int main(){
    cout << "부모 pid : " << getpid() << endl;
    if (fork()==0){
        // fork()는 자식 프로세스를 생성해주는 명령어
        // fork()는 부모 프로세스이면 자식의 pid값
        // 자식 프로세스이면 0을 반환함
        // 실행이 실패하면 -1을 반환
        cout << "자식 pid : " << getpid() << endl;  
        // fork()가 0이므로 자식 pid 출력

    }
    return 0;
}

