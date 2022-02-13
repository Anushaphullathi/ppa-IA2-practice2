#include<stdio.h>
typedef struct _triangle
{
  float base,altitude,area;
}Triangle;
int input_n()
{
  int a;
  scanf("%d",&a);
  return a;
}
Triangle input_triangle()
{
  Triangle a;
  scanf("%f %f",&a.base,&a.altitude);
  return(a);
}
void find_area(Triangle *t)
{
  t->area=t->base*(t->altitude*0.5);
}
void input_n_triangles(int n,Triangle t[n])
{
  for(int i=0;i<n;i++)
    {
    printf("enter the base and altitude of the triangle no.%d\n",i+1);
    t[i]=input_triangle();
    }
}
void find_areas_n(int n, Triangle t[n])
{
  for(int i=0;i<n;i++)
    {
      find_area(&t[i]);
    }
}
Triangle find_smallest_triangle(int n,Triangle t[n])
{
  int min=0;
  for(int i=0;i<n;i++)
    {
      if(t[min].area>t[i].area)
      {
        min=i;
      }
    }
  return(t[min]);
}
void output(int n, Triangle t[n],Triangle min)
{
  printf("the smallest of the triangles with base's and height's\n");
  for(int i=0;i<n;i++)
    {
      printf("%f,%f\n",t[i].base,t[i].altitude);
    }
  printf("is the triangle with base=%f and height=%f\n",min.base,min.altitude);
  printf("and has an area=%f\n",min.area);
}
int main()
{
  int z;
  printf("enter the number of triangles\n");
  z=input_n();
  Triangle t[z],min;
  input_n_triangles(z,t);
  find_areas_n(z,t);
  min=find_smallest_triangle(z, t);
  output(z,t,min);
  return 0;
}
