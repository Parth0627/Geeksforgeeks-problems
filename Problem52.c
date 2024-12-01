#include <stdio.h>

int main()
{
    int size,temp;
    
    printf("Enter the size of your array\n");
    scanf("%d",&size);
    int A[size];
    
    for (int i = 0;i<size;i++)
    {
        printf("Enter the %d element of your array\n",i+1);
        scanf("%d",&A[i]);
    }
    
    printf("Initial array:\n");
    for (int i = 0;i<size;i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
    
    for (int i = 0;i<size/2;i++)
    {
        temp = A[i];
        A[i] = A[size - i - 1];
        A[size - i - 1] = temp;
    }
    
    printf("Final array:\n");
    for (int i = 0;i<size;i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
    return 0;
}
