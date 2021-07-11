#include <stdio.h>

int main(void)
{
    int dan=0, num1=1;

    printf("몇 단? ");
    scanf("%d", &dan);

    while(num1<10)
    {
        printf("%d*%d=%d \n", dan, num1, dan*num1);
        num1++;

    }
   
 
    return 0;
 }
   



