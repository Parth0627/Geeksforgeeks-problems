#include <stdio.h>

int main()
{
    int A[8] = {1,2,3,4,5,6,7,8};
    
    int sum = 0;
    
    for (int i = 0;i<8;i++)
    {
        sum = sum + A[i];
    }
    
    float avg = (float)sum/8;
    
    printf("The average of the array is %.3f\n",avg);
    return 0;
}