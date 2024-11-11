#include<stdio.h>

int dca(int n);
int main()
{
    float r;
    printf("Enter the number :-");
    scanf("%f",&r);
    dca(r);
    return 0;
}
int dca(int r)
{
    float d,c,a;
    a=3.14*r*r;
    d=2*r;
    c=2*3.14*r;
    printf("Area is %f\n",a);
    printf("diameter is %f\n",d);
    printf("circumference is %f\n",c);
    return 0;
}