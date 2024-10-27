/*print pattern
54321 
4321 
321 
21 
1 
*/
#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number of rows:-");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        for(int j=n-i+1;j>=1;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    
    return 0;
}