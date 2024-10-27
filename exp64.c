// print reverse number 
#include<stdio.h>
int main()
{
    int n,r;
    printf("Enter the number:-");
    scanf("%d",&n);

    printf("reverse of the number is : ");
   
    do{
        r=n%10;
        n=n/10;
        printf("%d",r);
    } while(n>0);
    return 0;
}