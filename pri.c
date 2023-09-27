//zomb
#include<stdio.h>
#include<unistd.h>
int main(){
int n=fork();
if(n>0)
{
	printf("parent");
	sleep(30);
}
else{
	printf("child");
}
return 0;
}
