#include <stdio.h>

int main()
{
   float real1,real2,img1,img2;
   
   printf("Enter the real value of your first complex number\n");
   scanf("%f",&real1);
   
    printf("Enter the imaginary value of your first complex number\n");
   scanf("%f",&img1);
   
    printf("Enter the real value of your second complex number\n");
   scanf("%f",&real2);
   
    printf("Enter the imaginary value of your second complex number\n");
   scanf("%f",&img2);
   
    printf("(%f + %fi) + (%f + %fi) = (%f + %fi)\n",real1,img1,real2,img2,real1 + real2,img1 + img2);
    
    return 0;
}