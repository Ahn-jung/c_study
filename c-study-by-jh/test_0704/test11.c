#include <stdio.h>

int main(void)
{
    int num1, num2, num3;
    int sum;
    float avg;

    scanf("%d %d %d", &num1,&num2,&num3);

    sum=num1+num2+num3;
    printf("%d %d %d=%d\n",num1,num2,num3,sum);
    avg=(num1+num2+num3)/3;
    printf("%d %d %d=%0.2f",num1,num2,num3,avg);
    return 0;
} 