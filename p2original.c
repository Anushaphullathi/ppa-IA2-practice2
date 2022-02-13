#include<stdio.h>
#include<math.h>
int input_side()
{
int a;
printf("Enter the sides of triangle:\n");
scanf("%d",&a);
return a;
}
int check_scalene(int a,int b,int c)
{
if(a==b && b==c){
  return(0);
}
else if(a==b||b==c||c==a)
{
 return(1);
}
else{
  return(2);
}
}
void output(int a,int b,int c,int isscalene)
{
if(isscalene==0){
  printf("equilateral");
}
else if(isscalene==1){
  printf("issoleces");
}
 else
 {
printf("sca")
}
}
int main()
{
int p,q,r,isscalene;
p=input_side();
q=input_side();
r=input_side();
check_scalene(p,q,r);
output(p,q,r,isscalene);
return 0;
}
