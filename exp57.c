//print input number is prime or not
#include<stdio.h>

int main()
{
    int n,i=1,counter=0,p;
    printf("Enter the number:-");
    scanf("%d",&n);
     if(n==0  || n==1)
    {
        printf("%d is neither PRIME nor COMPOSITE",n);
        goto end;
    }

    do{
        p=n%i;
        if(n%i==0)
        {
            counter++;
        }
        i++;
    }while(i<=n);
  
    if(counter==2)
    {
        printf("PRIME");
    }
    else
    {
        printf("COMPOSITE");
    }

    end:
    
    return 0;
}