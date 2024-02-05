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
// 자식 1 pid : 12138
// 자식의 자식 pid : 12139
// 자식 2 pid : 12140
// 부모 pid : 12134

