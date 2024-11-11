#include<stdio.h>
#include<math.h>

void cube(int n);
int main()
{
    int n;
    printf("Enter the number :-");
    scanf("%d",&n);
    cube(n);
    return 0;
}
void cube(int n)
{
    int c = pow(n,3);
    printf("The cube of %d is : %d",n,c);
}