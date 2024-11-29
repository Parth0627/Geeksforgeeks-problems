#include <stdio.h>

int main()
{
    int n,temp = 1,sum = 0,key,sum1 = 0;
    printf("Enter the index till which you want the sum of the fibonacci series (will include 0,Eg -5 ,then 0,1,2,3,4,5 is considered)\n");
    scanf("%d",&n);
    
    int A[n*2 + 1];
    A[0] = 0;
    
    for (int i = 1;i<n*2+1;i++)
    {
        key = sum;
        sum = sum + temp;
        A[i] = sum;
        temp = key;
    }
    
    for (int i = 0;i<n*2+1;i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
    
    for (int i = 0;i<n*2+1;i++)
    {
        if (i % 2 == 0)
        {
            sum1 = sum1 + A[i];
        }
    }
    
    printf("The sum of first %d indexs (including 0th index) is = %d\n",n,sum1);
    return 0;
}