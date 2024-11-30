#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number of rows\n");
    scanf("%d",&num);
    
   for (int i = num;i>=1;i--)
   {
      for (int j = 0;j<num - i;j++)
      {
          printf(" ");
      }
      
      if (i == num)
      {
          for (int j = 0;j<(num*2) - 1;j++)
          {
              printf("*");
          }
          printf("\n");
      }
      
      else if (i == 1)
      {
          printf("*\n");
      }
      
      else
      {
          for (int j = 0;j<2;j++)
          {
              printf("*");
              for (int k = 0;k<(i*2)-3;k++)
              {
                  printf(" ");
              }
          }
          printf("\n");
      }
   }
   
        
    return 0;
}