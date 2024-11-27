#include <stdio.h>

int main()
{
    int num1,num2,swap;
    
    printf("Enter the values of x\n");
    scanf("%d",&num1);
    
    printf("Enter the values of y\n");
    scanf("%d",&num2);
    
    printf("Initially x = %d, y = %d\n",num1,num2);
    
    swap = num1;
    num1 = num2;
    num2 = swap;
    
    printf("After swapping x = %d , y = %d\n",num1,num2);
    
    return 0;
}