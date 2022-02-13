#include<stdio.h>
int input_number()
{
int n;
printf("Enter a number:\n");
scanf("%d",&n);
return n;
}
int is_composite(int n)
{
int flag=0;
if(n<=2){
  printf("Enter the number greater than 2");
}
else{
  for(int i=2;i<n;i++){
    if(n%i==0){
      printf("its a composite number");
      flag=1;
      break;
    }
  }
}
if (flag==0){
 return(0);
}
return(1) ;
}
void output(int n, int composite)
{
if(composite==0)
{
  printf("it is not composite");
}else{
  printf("it is composite");
}

}
int main()
{
  int p,q;
  p=input_number();
  q=is_composite(p);
  output(q,p);
  return 0;
}