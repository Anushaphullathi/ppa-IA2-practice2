#include<stdio.h>
void input(float *base, float *height)
{
printf("enter the value of base and height:\n");
scanf("%f %f",base,height);
}
void find_area(float base , float height, float *area)
{
*area=0.5*(base*height);
}
void output(float base, float height, float area)
{
printf("the area of triangle =%f",area);
}
int main()
{
float p,q,r;
input(&p,&q);
find_area(p,q,&r);
output(p,q,r);
return 0;
}
