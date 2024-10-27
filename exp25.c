//enter the week numberpritns its day
#include<stdio.h>
int main()
{
    int week_day;
    printf("Enter the number(1 to 7):-");
    scanf("%d",&week_day);

    switch(week_day)
    {
        case 1: 
        printf("monday");
        break;
        case 2: 
        printf("tuesday");
        break;
        case 3: 
        printf("wednesday");
        break;
        case 4: 
        printf("thursday");
        break;
        case 5: 
        printf("friday");
        break;
        case 6: 
        printf("saturday");
        break;
        case 7: 
        printf("sunday");
        break;
        default: 
        printf("IT IS NOT WEEK NUMBER");
        
    }

    
    return 0;
}