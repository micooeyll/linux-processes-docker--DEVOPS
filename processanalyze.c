#include <stdio.h>
#include <sys/wait.h>
#include <unistd.h>

int main() {

	printf("Parents started with PID :  %d \n\n",getpid());
	
	for(int i =0 ; i<3 ;i++){
	int pid = fork() ;
	
	if(pid == 0){
	printf("\n %d. Child process started with PID :  %d \n" ,(i+1), getpid());  
	sleep(3);
	printf("\n %d. Child process over with PID :  %d \n" ,(i+1) , getpid());
	sleep(3);
	return 0;
	}
}
	for(int i=0;i<3;i++){
	wait(NULL);
	}

printf("\n All children processes are finished , Parent exiting ...\n");

return 0;

}
