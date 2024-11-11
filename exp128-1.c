#include<stdio.h>

int main()
{
    int r,c,t;
    printf("Enter the number of rows :-");
    scanf("%d",&r);
    printf("Enter the number of cols :-");
    scanf("%d",&c);
    int a[r][c];

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
    printf("Elements in array :\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
     a[c][r];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            t=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=t;                        
        }
    }
    
    printf("Elements in transpose of array :\n");
     for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}