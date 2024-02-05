#include<iostream>
#include<unistd.h>
// unistd.h는 운영체제 API에 대한 액세스를 제공함
using namespace std;

int main(){
    cout << "pid : " << getpid() << endl;
    return 0;
}