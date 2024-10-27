/*print pattern
2 
4   6 
8   10  12 
14  16  18  20  
22  24  26  28  30 
*/
#include<stdio.h>

int main()
{
    int n,k=2;
    printf("Enter the number of rows:-");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++,k+=2)
        {
            printf("%d ",k);
        }
        printf("\n");
    }

    return 0;
}