#include<stdio.h>
int input_side()
{
  int a;
  scanf("%d",&a);
  return a;
}
int check_scalene(int a,int b,int c)
{
  if(a==b || b==c || c==a)
  {
    return(1);
  }else
  {
    return(0);
  }
}
void output(int a,int b,int c,int isscalene)
{
  if(isscalene==1)
  {
    printf("the triangle is not scalene\n");
  }else{
    printf("the triangle is scalene\n");
  }
}
int main()
{
  int p,q,r,value;
  printf("enter the three sides\n");
  p=input_side();
  q=input_side();
  r=input_side();
  value=check_scalene(p,q,r);
  output(p,q,r,value);
  return 0;
}
