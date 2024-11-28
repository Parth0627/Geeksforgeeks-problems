#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
   int num,sum,digit;
   char temp1[20];
   
   for (int i = 1;i<=1000;i++)
   {
       num = i;
       sum = 0;
   sprintf(temp1,"%d",num);
   
   for (int j = 0;j<strlen(temp1);j++)
   {
        digit = temp1[j] - '0';
       sum = sum + pow(digit,strlen(temp1));
   }
   
   if (sum == num)
   {
       printf("%d ",num);
   }
   }
    return 0;
}