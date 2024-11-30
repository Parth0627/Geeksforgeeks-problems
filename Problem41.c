#include <stdio.h>

int main()
{
    int num;
    printf("Enter your number\n");
    scanf("%d",&num);
    
    for (int i = 0;i<num*2;i++)
    {
        if (i <= num)
        {
        for (int j = 0;j< num-i;j++)
        {
            printf(" ");
        }
        
        for (int k = 0;k<(i*2)-1;k++)
        {
            printf("*");
        }
        printf("\n");
        }
        
        else
        {
            for (int j = i - num;j>0;j--)
            {
                printf(" ");
            }
            
            for (int k = 0;k<(((num*2)-i)*2)- 1;k++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
        
    return 0;
}
