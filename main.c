#include <stdio.h>

int main()
{
  int num,sum = 0;
  
  printf("Enter your Natural number\n");
  scanf("%d",&num);
  
  for (int i = 0;i<=num;i++)
  {
      sum = sum + i;
  }
   
   printf("The sum of the Natural numbers is %d\n",sum);
    return 0;
}