//print 1,2,4,8,16,32
#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    printf("Enter the number:-");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        int p=pow(2,i);
        printf("%d\t",p);
        
    }
    
    return 0;
}