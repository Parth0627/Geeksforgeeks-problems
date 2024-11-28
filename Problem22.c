#include <stdio.h>
#include <stdbool.h>

bool isLeap(int year)
{
    if (year % 100 == 0)
    {
        if (year % 400 == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else if (year % 4 == 0)
    {
        return true;
    }
    return false;
}

int main()
{
    int year;
  printf("Enter your year\n");  
  scanf("%d",&year);
  
  if(isLeap(year))
  {
      printf("%d is a leap year\n",year);
  }
  else
  {
      printf("%d is not a leap year\n",year);
  }
  
    return 0;
}
