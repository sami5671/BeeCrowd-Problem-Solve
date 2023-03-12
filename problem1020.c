/*this is the C program for converting the integer value to year, month, days*/
#include <stdio.h>
int main()
{
    int year, month, days, new_days, age;
    // printf("Enter the age: ");
    scanf("%d", &age);

    year = age / 365;
    new_days = age - (year * 365);
    month = new_days / 30;
    days = new_days - (month * 30);

    printf("%d ano(s)\n", year);
    printf("%d mes(es)\n", month);
    printf("%d dia(s)\n", days);
    return 0;
}
