// print reverse number 
#include<stdio.h>
int main()
{
    int n,r;
    printf("Enter the number:-");
    scanf("%d",&n);

    printf("reverse of the number is : ");
    for(;n>0;)
    {
        r=n%10;
        n=n/10;
        printf("%d",r);
    }
    return 0;
}