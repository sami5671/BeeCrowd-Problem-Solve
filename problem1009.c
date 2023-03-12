/*this is the C program for calculating the total salary of a salesman in a month*/
#include<stdio.h>
int main(){
char seller_name[15];
float fixed_salary,total_sell_in_month,receive_money;

printf("employee's first name: ");
scanf("%s",&seller_name);

printf("employee's fixed salary: ");
scanf("%f",&fixed_salary);

printf("employee's total sells: ");
scanf("%f",&total_sell_in_month);

printf("The final salary (total) of this seller at the end of the month is: %.2f\n", receive_money=((15*total_sell_in_month)/100)+fixed_salary);

return 0;
}
