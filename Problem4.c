#include <stdio.h>

int main()
{
    float num1,num2;
    printf("Enter the first number you want to add\n");
    scanf("%f",&num1);
    
    printf("Enter the second number you want to add\n");
    scanf("%f",&num2);
    
    printf("%f + %f = %f\n",num1,num2,num1+num2);
    return 0;
}
