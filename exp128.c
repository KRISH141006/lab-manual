#include<stdio.h>

int main()
{
    int r,c;
    printf("Enter the number of rows :-");
    scanf("%d",&r);
    printf("Enter the number of cols :-");
    scanf("%d",&c);
    int a[r][c];
    int b[c][r];

    printf("Enter the elements in array :\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            b[j][i]=a[i][j];
        }
    }
    printf("Elements in array :\n");
     for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    printf("Elements in tranpose of array :\n");
     for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
}