#include <stdio.h>

int main()
{
   float num;
   
   printf("Enter your number\n");
   scanf("%f",&num);
   
   if ( num == 0 )
   {
       printf("Your number is Zero\n");
   }
   else if( num > 0)
   {
       printf("Your number is a positive number\n");
   }
   else
   {
       printf("Your number is a negative number\n");
   }
   
    return 0;
}
