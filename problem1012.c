/*this is the C program for calculating the area of triangle,circle,trapezium,square,rectangle*/
#include<stdio.h>
#define pi 3.14159
int main(){
float A,B,C,area_triangle,area_circle,area_trapezium,area_square,area_rectangle;
scanf("%f %f %f",&A,&B,&C);


printf("TRIANGULO: %.3f\n",area_triangle=(.5*A*C));

printf("CIRCULO: %.3f\n",area_circle=(pi*C*C));

printf("TRAPEZIO: %.3f\n",area_trapezium=((A+B)/2)*C);

printf("QUADRADO: %.3f\n",area_square=B*B);

printf("RETANGULO: %.3f\n",area_rectangle=A*B);
return 0;
}
