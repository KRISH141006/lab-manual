#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the number a:-");
    scanf("%d",&a);
    printf("Enter the number b:-");
    scanf("%d",&b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("a=%d\n",a);
    printf("b=%d",b);    
    return 0;
}

/*
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the number a:-");
    scanf("%d",&a);
    printf("Enter the number b:-");
    scanf("%d",&b);

    c=a;
    a=b;
    b=c;

    printf("a=%d\n",a);
    printf("b=%d",b);    
    return 0;
}

*/