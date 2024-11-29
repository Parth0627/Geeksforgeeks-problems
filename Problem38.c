#include <stdio.h>

int main()
{
    int num;
    printf("Enter your number\n");
    scanf("%d",&num);
    
    for (int i = 1;i<=num;i++)
    {
        for (int j = 0;j<num - i;j++)
        {
            printf(" ");
        }
        for (int k = 0;k<(i*2)-1;k++)
        {
        printf("%d",i);
        }
        printf("\n");
    }
    
    return 0;
}
