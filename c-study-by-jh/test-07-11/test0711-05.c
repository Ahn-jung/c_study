#include <stdio.h>

int main(void)
{
    int dan=0, num1;

    printf("몇 단? ");
    scanf("%d", &dan);

    for(num1=1;num1<10;num1++);
    {
        printf("%d*%d=%d \n", dan, num1, dan*num1);
    }
   
 
    return 0;
}