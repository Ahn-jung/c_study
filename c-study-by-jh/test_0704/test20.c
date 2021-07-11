#include <stdio.h>
int main(void)
{
    int opt;

    printf("1.개 2.고양이 3.병아리 \n");
    printf("number?");
    scanf("%d", &opt);

    if(opt==1)    
    printf("cat \n");

    if(opt==2)
    printf("dog \n");

    if(opt==3)
    printf("chick \n");

    else
    printf("i don't know \n");

    return 0;    
}