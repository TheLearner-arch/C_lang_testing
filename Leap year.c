#include<stdio.h>
int main()
{
  //Program for finding leap year
  //Theory-->
  //Case 1-> Year is not a multiple of 100 but a multiple of 4 then it is a leap year else not a leap year.
  //Case 2-> Year is a multiple of 100 then it should also a mutliple of 400 for it to be leap year.
  int y;
  printf("Enter the year");
  scanf("%d", &y);
  if(y%100==0)
  {
    if(y%400==0)
    printf("Leap year");
    else
    printf("Not a leap year");
  }
  else
  {
    if(y%4==0)
    printf("Leap year");
    else
    printf("Not a leap year");
  }
  return 0;
}