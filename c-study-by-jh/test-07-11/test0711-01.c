#include <stdio.h>

int main(void)
{
    int num1;

    printf("정수입력:");
    scanf("%d", &num1);
   
    if (num1==2)
        printf("28");
    else if (num1=4 || num1==6 || num1==9 || num1==11)
        printf("30");
    else
        printf("31");
    return 0;
 }
   



