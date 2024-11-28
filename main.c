#include <stdio.h>

int main()
{
    int num1,num2;
    
    printf("Enter the number you want multiplication table\n");
    scanf("%d",&num1);
    
    printf("Enter the number till which you want the multiplication\n");
    scanf("%d",&num2);
    
    for (int i = 1;i<=num2;i++)
    {
        printf("%d * %d = %d\n",num1,i,num1 * i);
    }
    
    return 0;
}