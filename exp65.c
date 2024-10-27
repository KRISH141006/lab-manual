//print product of the number
#include<stdio.h>
int main()
{
    int n,p=1,r;
    printf("Enter the number:-");
    scanf("%d",&n);

    do{
        r=n%10;
        n=n/10;
        p=p*r;
    }while(n>0);

    printf("product of the each digit of number : %d",p);

    
    return 0;
}