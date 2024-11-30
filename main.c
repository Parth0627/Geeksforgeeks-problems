#include <stdio.h>

int main()
{
    int num;
    printf("Enter your number\n");
    scanf("%d",&num);
    
    for (int i = 1;i<=num;i++)
    {
        if (i == 1)
        {
            for (int j = 0;j<num - i;j++)
            {
                printf(" ");
            }
            printf("*\n");
        }
        else if (i == num)
        {
            for (int j = 0;j<(num*2)-1;j++)
            {
                printf("*");
            }
            printf("\n");
        }
        else
        {
            for (int j = 0;j<num - i;j++)
            {
                printf(" ");
            }
            for (int k = 0;k<=1;k++)
            {
                printf("*");
                for (int l = 0;l<(i*2)-3;l++)
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    
    return 0;
}