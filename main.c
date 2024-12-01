#include <stdio.h>

int main()
{
    int max = 0;
    int A[3][3] = {
        {1,2,3},
        {4,14,6},
        {15,8,-4},
    };
    
    int min = A[0][0];
    for (int i = 0;i<3;i++)
    {
         for (int j = 0;j<3;j++)
         {
             if (A[i][j] > max)
             {
                 max = A[i][j];
             }
             
             if (A[i][j] < min)
             {
                 min = A[i][j];
             }
         }
    }
      printf("%d is the minimun and %d is the maximum element present in the array\n",min,max);   
    
    return 0;
}