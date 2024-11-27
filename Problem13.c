#include <stdio.h>

int main()
{
   float Principal,rate,time,si;

    printf("Enter the Principal amount\n");
    scanf("%f",&Principal);
    
    printf("Enter the Intrest rate (%% per annum)\n");
    scanf("%f",&rate);
    
    printf("Enter the Time (in years)\n");
    scanf("%f",&time);
    
    si = ( Principal * rate * time ) / 100;
    
    printf("The Simple Intrest is %f\n",si);
  
    return 0;
}
