#include <stdio.h>
#include <stdbool.h>

bool isEven(int num)
{
    if (num % 2 == 0)
    {
        return true;
    }
    return false;
}

int main()
{
   float num;
   
   printf("Enter your number\n");
   scanf("%f",&num);
   
   if (isEven(num))
   {
       printf("%f number is an even number\n",num);
   }
   else
   {
        printf("%f number is an odd number\n",num);
   }
   
   
    return 0;
}