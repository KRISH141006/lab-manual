// check number is prime or not
#include<stdio.h>
int main()
{
    int n1,count=0;
    printf("Enter the number:-");
    scanf("%d",&n1);

    for( int i=1;n1>=i;i++)
    {
        if(n1%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        printf("PRIME");
    }
    else if(n1==0||n1==1)
    {
        printf("%d is neither prime nor composite ",n1);
    }
    else
    {
        printf("COMPOSITE");
    }
    
    
    return 0;
}