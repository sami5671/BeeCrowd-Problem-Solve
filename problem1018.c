/*this is the c program for read value and the list of banknotes*/
#include<stdio.h>
int main(){
int N,notes_100,notes_50,notes_20,notes_10,notes_5,notes_2,notes_1,new_notes,new_notes_2,new_notes_3,new_notes_4,new_notes_5,new_notes_6;
printf("Enter the amount: ");
scanf("%d",&N);

if(0 < N < 1000000){
    printf("%d\n",N);
}

notes_100=N/100;
new_notes=N-(notes_100*100);

notes_50=new_notes/50;
new_notes_2=new_notes-(notes_50*50);

notes_20=new_notes_2/20;
new_notes_3=new_notes_2-(notes_20*20);

notes_10=new_notes_3/10;
new_notes_4=new_notes_3-(notes_10*10);

notes_5=new_notes_4/5;
new_notes_5=new_notes_4-(notes_5*5);

notes_2=new_notes_5/2;
new_notes_6=new_notes_5-(notes_2*2);

notes_1=new_notes_6/1;

printf("%d nota(s) de R$ 100,00\n",notes_100);
printf("%d nota(s) de R$ 50,00\n",notes_50);
printf("%d nota(s) de R$ 20,00\n",notes_20);
printf("%d nota(s) de R$ 10,00\n",notes_10);
printf("%d nota(s) de R$ 5,00\n",notes_5);
printf("%d nota(s) de R$ 2,00\n",notes_2);
printf("%d nota(s) de R$ 1,00\n",notes_1);

return 0;
}



