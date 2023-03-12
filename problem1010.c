/*this is the C program for the amount to be paid of two products*/
#include<stdio.h>
int main(){
int code_product_1,unit_product_1,code_product_2,unit_product_2;
float price_one_unit_p_1,price_one_unit_p_2,Valor_a_pagar;

scanf("%d",&code_product_1);
scanf("%d",&unit_product_1);
scanf("%f",&price_one_unit_p_1);

scanf("%d",&code_product_2);
scanf("%d",&unit_product_2);
scanf("%f",&price_one_unit_p_2);

printf("VALOR A PAGAR: R$ %.2f\n",Valor_a_pagar=(unit_product_1*price_one_unit_p_1)+(unit_product_2*price_one_unit_p_2));

return 0;
}
