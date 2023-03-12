/*This the C program for converting the time from second to hours:minutes:seconds*/
#include<stdio.h>
int main(){
int N,hour,minute,second,new_time;
scanf("%d",&N);

hour=N/3600;
new_time=N-(hour*3600);
minute=new_time/60;
second=new_time-(minute*60);

printf("%d:%d:%d",hour,minute,second);
return 0;
}
