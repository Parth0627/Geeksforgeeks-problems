#include <stdio.h>
#include <stdbool.h>

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
        for (int i = 3;i<num;i++)
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
    
    if (isPrime(num))
    {
        printf("%d is a prime number\n",num);
    }
    else
    {
        printf("%d is not a prime number\n",num);
    }
    return 0;
}