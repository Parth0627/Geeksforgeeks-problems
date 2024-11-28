#include <stdio.h>
#include <string.h>

int main()
{
    int num,temp,count = 0;
    char c[20],d[20];
    
    printf("Enter your number\n");
    scanf("%d",&num);
    
    sprintf(c,"%d",num);
    sprintf(d,"%d",num);
    
    for (int i = 0;i< strlen(c)/2;i++)
    {
        temp = c[i];
        c[i] = c[strlen(c) - i - 1];
        c[strlen(c) - i - 1] = temp;
    }
    
    for (int i = 0;i<strlen(c);i++)
    {
        if (c[i] == d[i])
        {
            count++;
        }
    }
    
    if (count == strlen(c))
    {
        printf("%d is a palindrome number\n",num);
    }
    else
    {
        printf("%d is not a palindrome number\n",num);
    }
    return 0;
}