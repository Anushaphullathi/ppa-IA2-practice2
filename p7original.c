#include<stdio.h>
typedef struct _triangle
{
  float base,altitude,area;
}Triangle;
Triangle input_triangle()
{
  Triangle a;
  printf("enter the base and altitude of the triangle\n");
  scanf("%f %f",&a.base,&a.altitude);
  return(a);
}
void find_area(Triangle *t)
{
  t->area=t->base*(t->altitude*0.5);
}
void output(Triangle t)
{
  printf("the area of triangle with base %f altitude %f is %f\n",t.base,t.altitude,t.area );
}
int main()
{
  Triangle b;
  b=input_triangle();
  find_area(&b);
  output(b);
  return 0;
}