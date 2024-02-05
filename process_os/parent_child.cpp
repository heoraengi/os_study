// 자식 프로세스 출력하기
#include<iostream>
#include<unistd.h>
// unistd.h는 운영체제 API에 대한 액세스를 제공함
using namespace std;

int main(){
    cout << "부모 pid : " << getpid() << endl;
    if (fork()==0){
        cout << "자식 pid : " << getpid() << endl;  
    }
    cout << getpid() << " : 실행합니다" << endl;
    return 0;
}

