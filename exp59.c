// finding hcf
#include<stdio.h>
int main()
{
    int n1,n2,fac1,fac2,hcf;
    printf("Enter the first number:-");
    scanf("%d",&n1);
    printf("Enter the second number:-");
    scanf("%d",&n2);

    int i=1;
    printf("factors of %d: \n",n1);
    
    do{
        // fac1=n1%i;
        if(n1%i==0)
        {
            printf("%d\n",i);
        }
        i++;
    }while(n1>=i);

    int j=1;
    printf("factors of %d: \n",n2);
    
    do{
        // fac2=n1%j;
        if(n2%j==0)
        {
            printf("%d\n",j);
        }
        j++;
    }while(n2>=j);

    int k=1;
    printf("common factors of %d and %d : \n",n1,n2);
    
    do{
        // fac2=n1%j;
        if(n2%k==0&&n1%k==0)
        {
            hcf=k;
            printf("%d\n",k);
        }
        k++;
    }while(n1>=k&&n2>=k);
    printf("HCF IS : %d",hcf);
    

    return 0;
    
}