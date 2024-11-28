#include <stdio.h>
#include <string.h>

int main()
{
    int num,temp;
    char c[20];
    
    printf("Enter your number\n");
    scanf("%d",&num);
    
    sprintf(c,"%d",num);
    
    for (int i = 0;i< strlen(c)/2;i++)
    {
        temp = c[i];
        c[i] = c[strlen(c) - i - 1];
        c[strlen(c) - i - 1] = temp;
    }
    
    for (int i = 0;i<strlen(c);i++)
    {
        printf("%c",c[i]);
    }
    return 0;
}