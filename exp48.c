//print sum of 1 to n even numbers
#include<stdio.h>

int main()
{
   int n,counter=0,sum=0;
    printf("Enter the number:-");
    scanf("%d",&n);

    int i=1;
    while(i<=n)
    {
        if(i%2==0)
        {
            printf("\n%d",i);
            sum=sum+i;
            counter++;
        }
        i++;
    }
    printf("\nFrom 1 to %d , it has %d even digits",n,counter);
    printf("\nSum of these numbers is : %d",sum);
    
    
    return 0;
}