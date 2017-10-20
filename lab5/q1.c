#include<stdio.h>
#include<unistd.h>
int main(void){
printf("before fork");
fork();
getpid();
getppid();
return 0;
}
