#include <stdio.h>
int main()
{ 
  int n,d,s=0,t; 
  
  // On VS-CODE if s=0 is not done further calculations with s varibale is carried out with 

  // garbage value since by default in C if we donot specify anything then the varibale initialized

  // belongs to AUTOMATIC STORAGE CLASS whose default value for a variable is GARBAGE VALUE

  // To avoid this initizilase s=0 
  printf("Enter the number\n");
  scanf("%d", &n);
  t = n; 
  while(t > 0)
  {
    d = t % 10;
    s = s * 10 + d;
    t = t / 10;
  }
  printf("reversed no:%d", s);
  return 0;
}