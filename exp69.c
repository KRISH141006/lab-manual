//print odd numbers between 1 to n
#include<stdio.h>
int main()
{
    int n,counter=0;
    printf("Enter the number:-");
    scanf("%d",&n);

    int i=1;
    do{
        if(i%2!=0)
        {
            printf("\n%d",i);
            counter++;
        }
        i++;
    }while(i<=n);
    printf("\nFrom 1 to %d , it has %d odd digits",n,counter);
    
    return 0;
}