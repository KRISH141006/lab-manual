//input month number and print number of days
#include<stdio.h>
int main()
{
    int month;
    printf("number of the month(1-12)=");
    scanf("%d",&month);
    
    switch(month)
{
    case 1: printf("january=31");
    break;
    case 2:printf("february=28");
    break;
    case 3: printf("march=31");
    break;
    case 4: printf("april=30");
    break;
    case 5: printf("may=31");
    break;
    case 6:printf("june=30");
    break;
    case 7:printf("july=31");
    break;
    case 8:printf("august=31");
    break;
    case 9: printf("september=30");
    break;
    case 10:printf("october=31");
    break;
    case 11:printf("november=30");
    break;
    case 12:printf("december=31");
    break; 
    default : printf("not a valid month rank");
    }
 return 0;
}
