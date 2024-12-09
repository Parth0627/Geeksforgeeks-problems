#include <stdio.h>
#include <stdbool.h>

bool isEven(int x)
{
    if (x == 0)
    {
        return true;
    }
    
    else if (x % 2 == 0)
    {
        return true;
    }
    return false;
}

int main()
{
    int num,k = 1;
    printf("Enter your number\n");
    scanf("%d",&num);
    
    for (int i = 0;i<num;i++)
    {
        for (int j = 0;j<=i;j++)
        {
        if(isEven(k))
        {
            printf("0");
            k++;
        }
        else
        {
            printf("1");
            k++;
          }
        }
        printf("\n");
    }
    
    return 0;
}