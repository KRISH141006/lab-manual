#include<stdio.h>

int mm(int a,int b);

int main()
{
    int a,b;
    printf("Enter the first number :-");
    scanf("%d",&a);
    printf("Enter the first number :-");
    scanf("%d",&b);

   printf("%d is maximum",mm(a,b));
       
}
int mm(int m,int n)
{
    int c=m>n?m:n;
    int d=m<n?m:n;
   // printf("%d is maximum and %d is minimum",c,d);
   return c;
}