#include <stdio.h>
#include <stdbool.h>

bool isPresent(int A[3][3],int temp)
{
    for (int i = 0;i<3;i++)
    {
         for (int j = 0;j<3;j++)
         {
             if (A[i][j] ==  temp)
             {
                 return true;
             }
         }
    }
    
    return false;
}

int main()
{
    int temp;
    int A[3][3] = {
        {1,2,3},
        {4,14,6},
        {7,8,9},
    };
    
    printf("Enter the value you want to search\n");
    scanf("%d",&temp);
    
    if(isPresent(A,temp))
    {
        printf("%d is present in the array\n",temp);
    }
    else
    {
      printf("%d is not present in the array\n",temp);   
    }
    
    return 0;
}