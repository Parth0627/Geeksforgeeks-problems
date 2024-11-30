#include <stdio.h>

int main()
{
    int num;
    printf("Enter your number\n");
    scanf("%d",&num);
    
    for (int i = num;i>=1;i--)
    {
       for (int j = i;j<num;j++)
       {
           printf(" ");
       }
       for (int k = 0;k<(i*2)-1;k++)
       {
           printf("*");
       }
       printf("\n");
    }
        
    return 0;
}
