#include <stdio.h>
int main(void)
{
    int  num1;
    scanf("%d", &num1);

    if(num1%400==0) 
        printf("leap year \n");

    else
    printf("common year \n");

    return 0;
}