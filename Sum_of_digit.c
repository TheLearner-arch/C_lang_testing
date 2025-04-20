#include<stdio.h>
#include<math.h>
int main()
{
  //SUM OF FIRST AND LAST DIGIT OF A NUMBER
 int n,k=0,d=0;
 int f,l,sum=0;
 printf("Enter the number"); 
 scanf("%d", &n);
 int t=n;
 while(t>0)
 {
  k++;
  t=t/10;
 }
 f=n/((int)pow(10,k)/10);
 l=n%10;
 sum=f+l;
 printf("%d", sum);
}