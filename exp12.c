//input days and print year and week in it
#include<stdio.h>
int main()
{
    float days;
    printf("Enter the number of days:-");
    scanf("%f",&days);

    printf("years=%f\n",days/365);
    printf("weeks=%f\n",days/365*52);
    
    return 0;
}