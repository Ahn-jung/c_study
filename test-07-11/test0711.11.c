#include <stdio.h>

int main(void)
{
    int user_input =1;

    while(user_input !=0)
    {
        printf("줄의 개수를 입력하세요!! 종료하시려면 0을 눌러주세요");
        scanf("%d",&user_input);

        printf("%d만큼 출력합니다.\r\n",user_input) ;


        for( int count = 0;count< user_input ; count++)
        {
            for(int sub_count = 1 ;sub_count<(user_input-count);sub_count++)
            {
                printf(" ");
            }

            for(int sub_count = 0 ;sub_count<(count*2)+1 ;sub_count++)
            {
                printf("*");
            }
            printf("\r\n");
        }
    }   
    return 0;
}