#include <stdio.h>

int main()
{
    int num;
    printf("Enter your number\n");
    scanf("%d",&num);
    
    int count = (num * (num + 1))/2;
    
    for (int i = 0;i<num;i++)
    {
        for (int j = 0;j<num - i;j++)
        {
            printf("%d ",count);
            count--;
        }
        printf("\n");
    }
}
