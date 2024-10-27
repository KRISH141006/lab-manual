#include<stdio.h>
int main()
{
    int a,b,c,ans1;
    printf("\na:-"); 
    scanf("%d",&a); 
    printf("b:-"); 
    scanf("%d",&b);  
     
    ans1= a>b?a:b;
    

    printf("%d is greater",ans1);
    return 0;
}
