#include<stdio.h>
int input()
{
int a;
printf("Enter the value of two numbers:\n");
scanf("%d",&a);
return a;
}
int gcd(int a,int b)
{
 int min,gcd;
 min=(a<b)?a:b;
 for(int i=1;i<=min;i++)
 {
   if(a%i==0 && b%i==0)       
   {
     gcd=i;
     printf("%d",i);
   }
 }
return gcd;
}
void output(int a,int b,int gcd)
{
printf("The gcd of %d and %d is %d\n",a,b,gcd);
}
int main()
{
int p,q,r;
p=input();
q=input();
r=gcd(p,q);
output(p,q,r);
return 0;
}