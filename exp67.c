// print multiplication table of the number
#include<stdio.h>
int main()
{
    int n,r;
    printf("Enter the number whose multiplication table want :-");
    scanf("%d",&n);
    printf("Enter the number till you want multiplication table :-");
    scanf("%d",&r);

    int i=1;
   
    do{
        printf("\n%d * %d = %d",n,i,n*i);
        i++;
    } while(i<=r);

    
    return 0;
}