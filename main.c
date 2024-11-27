#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(int num)
{
    if (num <= 0 || num == 1)
    {
        return false;
    }
    else if(num == 2)
    {
        return true;
    }
    else if (num % 2 == 0)
    {
        return false;
    }
    else
    {
        for (int i = 3;i<=sqrt(num);i++)
        {
            if (num % i == 0)
            {
                return false;
        }
      }
    }
    return true;
}


int main()
{
   int num;
   printf("Enter your number\n");
   scanf("%d",&num);
   
   for (int i = 2;i<=num;i++)
   {
       if(isPrime(i))
       {
           printf("%d ",i);
       }
   }
   
   printf("are the prime numbers between 1 to %d\n",num);
    
    return 0;
}