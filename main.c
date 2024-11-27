#include <stdio.h>

int main()
{
    float tempinF,tempinC;
    
    printf("Enter the temperature in fahrenheit\n");
    scanf("%f",&tempinF);
    
    tempinC = (tempinF - 32)* 5/9;
    
    printf("%f Fahrenheit = %f Celsius\n",tempinF,tempinC);
    
    return 0;
}