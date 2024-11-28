#include <stdio.h>

int factorial(int num)
{
    int fac = 1;
    
    if (num == 0)
    {
        return fac;
    }
    else
    {
    for (int i = num;i>0;i--)
    {
        fac = fac * i;
    }
   return fac;
  }
}

int main()
{
    int num;
  printf("Enter your number\n");  
  scanf("%d",&num);
  
  printf("%d factorial is %d\n",num,factorial(num));
  
    return 0;
}