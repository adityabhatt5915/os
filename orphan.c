//orphan
#include<stdio.h>
#include<unistd.h>
int main(){
int n=fork();
if(n>0)
{
	printf("parent");
	
}
else{
	printf("child");
	sleep(30);
}
return 0;
}
