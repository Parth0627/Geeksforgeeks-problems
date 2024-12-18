#include <stdio.h>

static int k = 0;
void sortc(int n,int m,int B[m],int C[n][m])
{
    int temp;
    for (int i = 0;i<m;i++)
    {
        for (int j = 0;j<m - i - 1;j++)
        {
            if (B[j+1] < B[j])
            {
                temp = B[j];
                B[j] = B[j+1];
                B[j+1] = temp;
            }
        }
    }
    
    for (int i = 0;i<m;i++)
    {
        C[k][i] = B[i];
    }
    
    k++;
}

void setzero(int m,int B[m])
{
    for (int i = 0;i<m;i++)
    {
        B[i] = 0;
    }
}

void display2d(int n,int m,int A[n][m])
{
    for (int i = 0;i<n;i++)
    {
        for (int j = 0;j<m;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int n,m;
    
    printf("Enter the number of rows in your 2D array\n");
    scanf("%d",&n);
    
    printf("Enter the number of Coloumns in your 2D array\n");
    scanf("%d",&m);
    
    int A[n][m];
    for (int i = 0;i<n;i++)
    {
        for (int j = 0;j<m;j++)
        {
            printf("Enter the value of %d row and %d coloumn element\n",i+1,j+1);
            scanf("%d",&A[i][j]);
        }
    }
    
    printf("Your Initial 2D array is:\n");
    display2d(n,m,A);
    
    int B[m];
    int C[n][m];
    
    for (int i = 0;i<n;i++)
    {
        for (int j = 0;j<m;j++)
        {
            B[j] = A[i][j];
        }
        sortc(n,m,B,C);
        setzero(m,B);
    }
    printf("Your final 2D array is:\n");
    display2d(n,m,C);
    
    k = 0;
    
    return 0;
    
}
