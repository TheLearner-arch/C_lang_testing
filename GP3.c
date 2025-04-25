#include<stdio.h>
#include<math.h>
int main()
{
  // 100,50,25,.....till n terms
  // Tn term of this series= 
  // a , ar , ar^2 , ar^3, ..........  ar^(n-1) --> Tn last term
  int n=0;
  float i=0.0;
  printf("Enter the no of terms");
  scanf("%d", &n);
  for(i=100.0; i>=100*( pow(1/2.0 , (n-1) ) ); i=i*(1/2.0))
  {
    printf("%f,", i);
  }
  return 0;
}
