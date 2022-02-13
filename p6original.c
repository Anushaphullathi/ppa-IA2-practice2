#include<stdio.h>
void input_two_strings(char *a,char *b)
{
    printf("enter the two words\n");
    scanf("%s",a);
    scanf("%s",b);
}
int strcmp(char a[], char b[])
{
    int w=0;
    for(w=0; ((a[w]!=0) || (b[w]!=0)); w++)
    {
        if(a[w]-b[w]!=0)
        {
            break;
        }
    }
    return a[w]-b[w];
}
void output(char a[], char b[],int soln)
{
    if(soln>0)
    {
        printf("%s is greater than %s\n",a,b);
    }
    else if(soln<0)
    {
        printf("%s is greater than %s\n",b,a);
    }
    else
    {
        printf("both the words are same\n");
    }
}
int main()
{
    int x;
    char a[15],b[15];
    input_two_strings(a,b);
    x=strcmp(a,b);
    output(a,b,x);
    return(0);
}