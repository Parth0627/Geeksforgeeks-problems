#include <stdio.h>

int main()
{
   int num;
   int sum = 1;
   int temp = 0;
   int key = 0;
   
   printf("Enter the number till which you want your Fibonacci series (1st term = 0), this is considered here\n");
   scanf("%d",&num);
   
   if (num == 1)
   {
       printf("0");
   }
   
   else
   {
     printf("0 1 ");
     for (int i = 0;i<num-2;i++)
      {
         key = sum;
         sum = temp + sum;
         printf("%d ",sum);
         temp = key;
     }
   }
   
    return 0;
}