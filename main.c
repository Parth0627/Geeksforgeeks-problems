#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
   int num,sum = 0;
   char temp1[20];
   printf("Enter your number\n");
   scanf("%d",&num);
   
   sprintf(temp1,"%d",num);
   
   for (int i = 0;i<strlen(temp1);i++)
   {
       int digit = temp1[i] - '0';
       sum = sum + pow(digit,strlen(temp1));
   }
   
   if (sum == num)
   {
       printf("%d is an ARMSTRONG number\n",num);
   }
   else
   {
       printf("%d is not an ARMSTRONG number\n",num);
   }
    return 0;
}