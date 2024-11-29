#include <stdio.h>

int main()
{
    int num;
    printf("Enter your number\n");
    scanf("%d",&num);
    
    for (int i = num;i>=1;i--)
    {
        for (int j = 0;j<i;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    
    return 0;
}