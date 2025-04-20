#include<stdio.h>
#include<math.h>
int main()
{
  // 100,97,94,91,88.....till all the positive terms--> TO PRINT 
  // Tn term of this series= 100-3n
  //a , a+d , a+2d , a+3d, ..........  a+(n-1)d -->Tn last term
  int n=0,i=0;
  // The value of n is 34 how find it in word file
  for(i=100; i>=(103-(3*34)); i=i-3)
  {
    printf("%d,", i);
  }
  return 0;
}
