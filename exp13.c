//input number of chairs and and total cost and calculate the cost of each chair
#include<stdio.h>

int main()
{
    float no_of_chair,total_cost;

    printf("Enter the value of no_of_chair:-");
     scanf("%f",&no_of_chair);

    printf("Enter the total cost:-");

    
     scanf("\n%f",&total_cost);

    printf("value of each chair is=%f",total_cost/no_of_chair);


    return 0;
}