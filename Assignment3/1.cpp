#include<iostream>
#include<sys/types.h>
#include<unistd.h>
using namespace std;
int main(){
	pid_t pid;
	pid = fork();
	if(pid == 0){
		cout<<"This is child process: "<<getpid()<<endl;//getppid();
	}
	else if(pid>0){
		cout<<"This is parent process: "<<getppid()<<endl;
	}
	else{
		cout<<"Process not created";
	}
return 0;
}
