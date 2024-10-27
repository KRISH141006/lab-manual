//print even numbers between 1 to n
#include<stdio.h>
int main()
{
    int n,counter=0,sum=0;
    printf("Enter the number:-");
    scanf("%d",&n);

    int i=1;
    do{
        if(i%2==0)
        {
            printf("\n%d",i);
            counter++;
            sum=sum+i;
        }
        i++;
    }while(i<=n);
    printf("\nFrom 1 to %d , it has %d even digits",n,counter);
    printf("\nsum of the numbers is : %d",sum);
    
    return 0;
}