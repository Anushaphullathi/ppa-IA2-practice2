#include<stdio.h>
int input_array_size ()
{
  int n;
  printf ("Enter array size\n");
  scanf ("%d", &n);
  return n;
}

void input_array (int n, int a[n])
{
  int i;
  printf ("Enter the %d elements array \n", n);
  for ( i = 0; i < n; i++)
    scanf ("%d", &a[i]);
}

int sum_n_arrays (int n, int a[n])
{
  int i;
  if(a[i]<=2){
  printf("Enter the number greater than 2");
}
else{
  for(int i=2;i<a[i];i++){
   if(a[i]%i==0){
   
  int i, sum = 0;
  for (i = 0; i < n; i++)
    sum = sum + a[i];
  return sum;
}
  }
}
}

void out_put (int n, int a[n], int sum)
{
  int i;
  for (i = 0; i < n - 1; i++)
    printf ("%d+", a[i]);
  printf ("%dis%d", a[n - 1], sum);
}

int main ()
{
  int n, sum;
  n = input_array_size ();
  int a[n];
  input_array (n, a);
  sum = sum_n_arrays (n, a);
  out_put (n, a, sum);
  return 0;
}