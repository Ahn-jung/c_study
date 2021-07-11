#include <stdio.h>
int main(void)
{
    int abs, num1, num2;
    scanf("%d %d", &num1,&num2);
    
    abs =num1>num2 ? num1-num2 : num2-num1;
    printf("%d",abs);
    return 0;
}