#include <stdio.h>

int main(void)
{
    int cur, is;

   for(cur=2;cur<10;cur++) 
    {
        
       for(is=1;is<10;is++)  
        {
            printf("%d*%d=%d \n", cur, is, cur*is);  
        
        }
        
    }
    return 0;
}




/*

#include <stdio.h>

int main(void)
{
    int cur=2, is=0;

    while(cur<10)
    {
        is=1;
        while(is<10)
        {
            printf("%d*%d=%d \n", cur, is, cur*is);
            is++;
        }
        cur++;
    }
    
}
*/