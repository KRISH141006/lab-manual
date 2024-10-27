//input salary of employee and calculate hra and da
#include<stdio.h>
int main()
{
    float salary,hra,da;

    printf("Enter the number:-");
    scanf("%f",&salary);

    if(salary<=10000)
    {
        printf(" your gross salary is %f ",salary+salary*0.2+salary*0.8);
    }
    else if(salary>10000 && salary<=20000)
    {
        printf(" your gross salary is %f",salary+salary*0.25+salary*0.90);
    }
    else 
    {
        printf(" your gross salary is %f",salary+salary*0.30+salary*0.95);
    }

    
    return 0;
}