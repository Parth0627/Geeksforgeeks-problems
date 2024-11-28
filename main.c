#include <stdio.h>

int main()
{
   float A[3];  
  float max = 0;
  
  for (int i = 0;i<3;i++)
  {
      printf("Enter your %d number\n",i+1);
      scanf("%f",&A[i]);
  }
  
  for (int i = 0;i<3;i++)
  {
      if (A[i] > max)
      {
        max = A[i];
      }
  }
  
  printf("The maximum number is %f\n",max);
   
    return 0;
}