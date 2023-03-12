/*this is the C program for finding the greatest number from three integer value*/
#include<stdio.h>
int main(){
int a,b,c,greatest_number;
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
greatest_number=((a+b+a*b*c*(a-b))/2);
printf(" %d eh o maior\n",greatest_number);

return 0;
}
