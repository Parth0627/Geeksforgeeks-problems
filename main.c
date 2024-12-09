#include <stdio.h>

void display(int n,int A[n])
{
    for (int i = 0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
}

void minimum(int i,int n,int A[n],int *k)
{
    int min = A[i];
    *k = i;
    
    for (int j = i+1;j<n;j++)
    {
        if (A[j] < min)
        {
            min = A[j];
            *k = j;
        }
    }
}

void selectionsort(int n,int A[n])
{
    int temp,k;
    for (int i = 0;i<n-1;i++)
    {
        minimum(i+1,n,A,&k);
        
        if (A[i] > A[k])
        {
            temp = A[i];
            A[i] = A[k];
            A[k] = temp;
        }
    }
}



int main()
{
    int n;
    printf("Enter the size of your array\n");
    scanf("%d",&n);
    
    int A[n];
    
    for (int i = 0;i<n;i++)
    {
        printf("Enter the value of element %d\n",i+1);
        scanf("%d",&A[i]);
    }
    
    printf("Initial array is: ");
    display(n,A);
    
    printf("Selection sort of the array:-\n");
    selectionsort(n,A);
    
    printf("The final array is: ");
    display(n,A);
    
    return 0;
}