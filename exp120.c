#include<stdio.h>

int main()
{
    int n,m,i,j,k,index;
    printf("Enter how many numbers in array:-");
    scanf("%d",&n);
    float a[n];
    printf("enter the numbers in array:-");
    for(i=0;i<n;i++)
    {
        scanf("%f",&a[i]);
    }

    printf("numbers in array : ");
    for(j=0;j<n;j++)
    {   
        printf("\na[%d]=%f",j,a[j]);
    }

    printf("\nEnter the index where you want to insert element:-");
    scanf("%d",index);


    return 0;
}








// printf("\nEnter how many numbers you want more in array:-");
// scanf("%d",&m);
//     printf("\nadd another numbers in array : ");
//     a[n+m];

//     for(k=i;k<n+m;k++)
//     {
//         scanf("\n%f",&a[k]);
//     }

//      printf("numbers in new array : ");
//     for(j=0;j<n+m;j++)
//     {   
//         printf("\na[%d]=%f",j,a[j]);
//     }


//     return 0;
// 

