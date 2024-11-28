#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    int num,mul,sum = 0,count = 0;
    char c[20],d[20],e[20];
    
    printf("Enter your number\n");
    scanf("%d",&num);
    
    mul = num * num;
    sprintf(c,"%d",mul);
    
    for (int i = 0;i<strlen(c);i++)
    {
        sum = sum + (c[i] - '0');
    }
    
    sprintf(d,"%d",sum);
    sprintf(e,"%d",num);
    
    for (int i = 0;i<strlen(e);i++)
    {
        if (e[i] == d[i])
        {
            count++;
        }
    }
    
    if (count == strlen(e))
    {
        printf("%d is a neon number\n",num);
    }
    else
    {
        printf("%d is not a neon number\n",num);
    }
    
    return 0;
}
