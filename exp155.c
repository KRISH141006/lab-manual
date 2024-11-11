#include<stdio.h>

void oe(int n);

int main()
{
    int n;
    printf("Enter the number :-");
    scanf("%d",&n);
    oe(n);
}
void oe(int n)
{
    if(n%2==0)
    {
        printf("%d is even",n);
    }
    else
    {
        printf("%d is odd",n);
    }
}