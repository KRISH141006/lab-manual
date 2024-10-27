//check input number is armstrong or not
#include<stdio.h>
#include<math.h>

int main()
{
    int n,n1,n2,r1,r2,count=0;
    double sum=0;

    printf("enter no. n:-");
    scanf("%d",&n);
    n1=n;
    n2=n;

     do{
        r1=n1%10;
        n1=n1/10;
        count++;
    }while(n1>0);

     do{
        r2=n2%10;
        n2=n2/10;
        sum=sum+pow(r2,count);
    }while(n2>0);

 
     if(sum==n)
    {
        printf("IT'S ARMSTRONG NUMBER");
    }
     else
    {
        printf("IT'S NOT ARMSTRONG NUMBER");
    }

    return 0;
}
