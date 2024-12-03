#include <stdio.h>

void bubblesort(int A[8])
{
    int temp;
    for (int i = 0;i<8;i++)
    {
        for (int j = 0;j<8 - i - 1;j++)
        {
            if (A[j+1] < A[j])
            {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
}

int main()
{
    int A[8] = {1,4,3,4,10,6,7,8};
    
    printf("Initial array is:\n");
    for (int i = 0;i<8;i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
    
    bubblesort(A);
    
    printf("Final array is:\n");
    for (int i = 0;i<8;i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
    return 0;
}
