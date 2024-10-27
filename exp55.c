//print sum of the input digit
#include<stdio.h>
int main()
{
    int n,sum=0,r;
    printf("Enter the number:-");
    scanf("%d",&n);

    do{
        r=n%10;
        n=n/10;
        sum=sum+r;
    } while(n>0);
    printf("\nsum is = %d",sum);

    return 0;
}