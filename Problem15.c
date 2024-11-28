#include <stdio.h>
#include <math.h>

int main()
{
   float length,width,area,perimeter;
   
   printf("Enter the length of your rectangle\n");
   scanf("%f",&length);
   
   printf("Enter the width of your rectangle\n");
   scanf("%f",&width);
   
   area = length * width;
   
   perimeter = 2*(length + width);
   
   printf("The Area of your rectangle is %f\n",area);
   
   printf("The Perimeter of your rectangle is %f\n",perimeter);
   
    return 0;
}
