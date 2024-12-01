#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(int x)
{
    if (x <= 1)
    {
        return false;
    }
    
    else if (x == 2)
    {
        return true;
    }
    else if ( x%2 == 0)
    {
        return false;
    }
    else
    {
        for (int i = 3;i<=sqrt(x);i++)
        {
            if (x%i == 0)
            {
                return false;
            }
        }
    }
    return true;
}

bool isEqual(int x,int y,int num)
{
    if ( x+y == num )
    {
        return true;
    }
    return false;
}

int main()
{
    int num,count = 0;
    printf("Enter your number\n");
    scanf("%d",&num);
    
    for (int i = 1;i<=num;i++)
    {
        if(isPrime(i))
        {
            for (int j = 1;j<i;j++)
            {
                if(isPrime(j))
                {
                    if (isEqual(i,j,num))
                    {
                        printf("Yes %d is a sum of 2 prime numbers %d + %d = %d\n",num,i,j,num);
                        count++;
                        break;
                    }
                }
            }
        }
        
        if (count != 0)
        {
            break;
        }
    }
    
    if (count == 0)
    {
        printf("%d is not a sum of prime numbers\n",num);
    }
    
    return 0;
}