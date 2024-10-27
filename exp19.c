//enter the no. of month and get no. of days in it
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number:-");
    scanf("%d",&num);

    switch(num)
    {
        case 1:
        printf("its JANUARY,it has 31 days");
        break;

        case 2:
        printf("its FEBUARY,it has either 28 or 29 days");
        break;

        case 3:
        printf("its MARCH,it has 31 days");
        break;

        case 4:
        printf("its APRIL,it has 30 days");
        break;

        case 5:
        printf("its MAY,it has 31 days");
        break;
        
        case 6:
        printf("its JUNE,it has 30 days");
        break;
        
        case 7:
        printf("its JULY,it has 31 days");
        break;
        
        case 8:
        printf("its AUGUST,it has 31 days");
        break;
        
        case 9:
        printf("its SEPTEMBER,it has 30 days");
        break;
        
        case 10:
        printf("its OCTOBER,it has 31 days");
        break;

        case 11:
        printf("its NOVEMBER ,it has 30 days");
        break;

        case 12:
        printf("its DECEMBER,it has 31 days");
        break;    

        default:
        printf("its not month number");
        break;    
        
    }
    
    return 0;
}