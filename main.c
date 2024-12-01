#include <stdio.h>

int main()
{
    int max = 0;
    int A[3][3] = {
        {1,2,3},
        {4,14,6},
        {7,8,9},
    };
    
    for (int i = 0;i<3;i++)
    {
         for (int j = 0;j<3;j++)
         {
             if (A[i][j] > max)
             {
                 max = A[i][j];
             }
         }
    }
    
    printf("%d is the maximum function\n",max);
    
    return 0;
}