#include<stdio.h>
int main()
{
  // 4,7,10,13,16--> TO PRINT 
  // Tn term of this series= 3n+1
  // a , a+d , a+2d , a+3d, ..........  a+(n-1)d --> Tn last term
  int n=0,i=0;
  printf("Enter the value of n");
  scanf("%d", &n);
  for(i=4;i<=((3*n)+1); i=i+3)
  {
    printf("%d,", i);
  }
  return 0;
}