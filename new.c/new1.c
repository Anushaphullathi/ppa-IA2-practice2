#include<stdio.h>
 int input_array_size()
 {
   int n;
   printf("enter the size of array \n");
   scanf("%d",&n);
   return n;
 }
void input_array(int n, int a[n])
  {
    int i;
    printf("enter the number\n");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    
  }
  int sum_composite_numbers(int n, int a[n])
  {
    int i,sum=0;
    for(i=0;i<n;i++)
    sum=sum+a[i];
    return sum;

  }
  void out_put(int sum)
  {
    int n,i;
    printf("the sum of numbers is\t");
    printf("%d + ",i);
    printf("%d is %d\n",n,sum);
  }
  int main()
  {
    int x,arr,sum0;
     x=input_array_size();
     input_array(x,arr);  
 sum0=sum_composite_numbers(x, arr);
    out_put(sum0);
  }