#include<stdio.h>

int main()
{
    int r,c;
    printf("Enter the no. of rows for 2d array :- ");
    scanf("%d",&r);
    printf("Enter the no. of cols :- ");
    scanf("%d",&c);

    int a[r][c];
    printf("Enter elements in Array : \n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
     printf("elements in Array...\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d",a[i][j]);
            printf("\t");
        }
        printf("\n");
    }
}