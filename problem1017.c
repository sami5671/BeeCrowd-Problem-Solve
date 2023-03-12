/*this is the c program for calculating the amount of spent fuel liters on a trip*/
#include<stdio.h>
int main(){
int spent_time,average_speed;
float dis,spent_fuel;
printf("Enter the spent time: ");
scanf("%d",&spent_time);
printf("Enter the average speed: ");
scanf("%d",&average_speed);

printf("%.3f",(dis=spent_time*average_speed,spent_fuel=dis/12));
return  0;
}
