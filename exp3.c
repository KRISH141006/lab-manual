//this code is for printing square and cube of a number 
#include<stdio.h>
#include<math.h>
int main()
{
    int a;double b,c;

    printf("Enter the number:-");
    scanf("%d",&a);

    b=pow(a,2);
    c=pow(a,3);

    printf("square of the number is=%lf\ncube of the number is=%lf",b,c);
    return 0;
}
