//priority premptive
#include<stdio.h>
#include<unistd.h>
int main(){
int n;
int at[10],bt[10],pri[10];
printf("enter the value of n::");
scanf("%d",&n);
printf("at\tbt\tpri\n");
for(int i=0;i<n;i++){
	scanf("%d %d %d",&at[i],&bt[i],&pri[i]);
}
printf("at\tbt\tpri\n");
for(int i=0;i<n;i++){
	printf("%d\t%d\t%d\n",at[i],bt[i],pri[i]);
}
for(int i=0;i<n;i++){
for(int j=i+1;j<n;j++){
if(at[i]>at[j]){
	int tempat=at[i];
	at[i]=at[j];
	at[j]=tempat;

	int tempbt=bt[i];
	bt[i]=bt[j];
	bt[j]=tempbt;

	int temppri=pri[i];
	pri[i]=pri[j];
	pri[j]=temppri;
}	
}
}
int ct=0;
for(int i=0;i<n;i++){
if(at[i]<=ct)
{
	printf("process %d is scheduled at time %d\n",i+1,ct);
	ct+=bt[i];
}
else{
	printf("process %d is scheduled at time %d\n",i+1,ct);
	ct=at[i]+bt[i];
}
}
return 0;
}
