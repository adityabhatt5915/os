//zombie
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main(){
int n=fork();
if(n>0)
{
	printf("parent");
	sleep(50);
}
else{
	printf("child");
	exit(0);
}
return 0;
}
