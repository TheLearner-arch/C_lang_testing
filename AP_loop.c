#include<stdio.h>
int main()
{
  // 1,3,5,7,9,11--> TO PRINT n
  // Tn term of odd numbers or last term = 2n-1
  //a , a+d , a+2d , a+3d, ..........  a+(n-1)d -->Tn last term
  int n=0,i=0;
  printf("Enter the value of n");
  scanf("%d", &n);
  for(i=1;i<=((2*n)-1); i=i+2)
  {
    printf("%d,", i);
  }
  return 0;
}