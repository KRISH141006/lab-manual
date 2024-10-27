//compare 3 numbers
#include<stdio.h>
int main()
{
    int a,b,c,ans1,ans2;
    printf("Enter the values of a,b&c ");
    printf("\na:-"); 
    scanf("%d",&a); 
    printf("b:-"); 
    scanf("%d",&b);  
    printf("c:-"); 
    scanf("%d",&c);  



    ans1= a>b?a:b;
    ans2=ans1>c?ans1:c;

    printf("%d is greater",ans2);
    return 0;
}
