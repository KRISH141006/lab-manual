//print numbers into words

#include<stdio.h>

int main()
{
    int n,r,t=0;
    printf("Enter the number:-");
    scanf("%d",&n);

    
    do{
        r=n%10;
        n=n/10;
        t=t*10+r;
    }while(n>0);
     
    do{
        r=t%10;
        t=t/10;
        if(r==0)
        {
            printf(" zero ");
        }
        else if(r==1)
        {
            printf(" one ");
        }
        else if(r==2)
        {
            printf(" two ");
        }
        else if(r==3)
        {
            printf(" three ");
        }
        else if(r==4)
        {
            printf(" four ");
        }
        else if(r==5)
        {
            printf(" five ");
        }
        else if(r==6)
        {
            printf(" six ");
        }
        else if(r==7)
        {
            printf(" seven ");
        }
        else if(r==8)
        {
            printf(" eight ");
        }
        else if(r==9)
        {
            printf(" nine ");
        }
    }while(t>0);

    
    return 0;
}