#include <stdio.h>

int main()
{
    int n,num = 0,time = 0,flag = -1;
    printf("Enter the size of your array\n");
    scanf("%d",&n);
    
    int A[n];
    for (int i = 0;i<n;i++)
    {
        printf("Enter the value of the %d element\n",i+1);
        scanf("%d",&A[i]);
    }
    
    for (int i = 0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
    
    for (int i = 0;i<n;i++)
    {
        flag = 0;
        for (int j = 0;j<n;j++)
        {
            if (A[j] == A[i])
            {
                flag++;
            }
        }
        
        if (flag > time)
        {
            num = A[i];
            time = flag;
        }
        
        else if(flag == time && A[i] > num)
        {
            num = A[i];
        }
    }
    
    printf("The most repeated number in your array is %d and it is repeated %d times\n",num,time);
    
    return 0;
}