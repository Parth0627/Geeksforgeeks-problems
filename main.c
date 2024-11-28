#include <stdio.h>
#include <math.h>

int main()
{
   float Principal,A,rate,time,n,ci,base,exponent,temp;

    printf("Enter the Principal amount\n");
    scanf("%f",&Principal);
    
    printf("Enter the Intrest rate (%% per annum)\n");
    scanf("%f",&rate);
    
    printf("Enter the Time (in years)\n");
    scanf("%f",&time);
    
    printf("Enter the number of times intrest is compounded per year\n");
    scanf("%f",&n);
    
    rate = rate/100;
    
    if (n == 0)
    {
        printf("No compounding will happen as number of times intrest is compounded  per year is 0\n");
    }
    else
{
   if (n*time == 1)
    {
        temp = 1 + (rate/n);
        
        A = Principal * temp;
        
        ci = A - Principal;
    
        printf("The Compound Intrest is %f\n",ci);
    
    }
    else
    {
        base = 1 + (rate/n);
        exponent = n * time;
        
        temp = pow(base, exponent);
        
        A = Principal * temp;
        
        ci = A - Principal;
    
        printf("The Compound Intrest is %f\n",ci);
    }
}
    return 0;
}