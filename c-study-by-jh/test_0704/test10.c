#include <stdio.h>

int main(void)
{
    int num1;
    float f_num2;
    
    scanf("%d", &num1);
    scanf("%f", &f_num2);
    printf("%d * %0.2f = %f", num1, f_num2, num1 * f_num2);
    return 0;
} 