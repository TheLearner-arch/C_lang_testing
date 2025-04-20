#include <stdio.h>
int main()
{
  float r,V;
  printf("Enter the radius of sphere");
  scanf("%f", &r);
  V=(4/3.0)*r*r*r;   // ANOTHER WAY--> V=(4/3.0)*pow(r,3); which is used with <math.h> header file
  printf("The volume of the sphere=%f", V); 
  return 0;
}