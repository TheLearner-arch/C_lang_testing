#include <stdio.h>
int main()
{
  int N,fact=1;   
  //The variable that stores fact should be initialized '1' since the factorial of a number begins
  //with the mutlipication of 1 followed by other number 4!=1 * 2 * 3 * 4 
  printf("Enter the number\n");
  scanf("%d", &N);
  int t=N;

  // Same is the reason the why condition t>=2 since we don't want the code to run once more for the 
  // multiplication with '1' in fact variable
  while(t>=2)  
  {
    fact=fact*t;
    t--;
  }

  printf("The factorial of number=%d", fact);
  return 0;
}