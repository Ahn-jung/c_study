#include <stdio.h>

int main(void)
{
    double total=0.0;
    double input=0.0;
    int num=0;

    for(;input>=0.0;)//input = 2.4, num = 1 => 1.2, num = 2 => -1.0, num = 3 => end
    {
        total +=input;// total = 2.4, 3.6
        print("실수 입력(minus to quit):");
        scanf("%lf", &input);// 2.4, 1.2, -1.0
        num++;
    }
    printf("평균; %f \n", total/(num-1));// 3.6/(3-1) = 1.8
    return 0;
}