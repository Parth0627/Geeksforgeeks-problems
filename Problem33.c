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
   int lim1,lim2,temp;
   printf("Enter your limit 1\n");
   scanf("%d",&lim1);
   
    printf("Enter your limit 2\n");
   scanf("%d",&lim2);
   
   if (lim1 > lim2)
   {
       temp = lim1;
       lim1 = lim2;
       lim2 = temp;
   }
   
   for (int i = lim1;i<=lim2;i++)
   {
       if(isPrime(i))
       {
           printf("%d ",i);
       }
   }
   
   printf("are the prime numbers between %d to %d\n",lim1,lim2);
    
    return 0;
}
