//print factorial of its number 
#include<stdio.h>
int main()
{
    int n,fac=1;
    printf("Enter the number:-");
    scanf("%d",&n);

    int i=1;
    do{
        fac=fac*i;
        i++;
    }while(i<=n);
    printf("fac of %d is : %d ",n,fac);
    
    return 0;
}