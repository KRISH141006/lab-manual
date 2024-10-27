//program to generate grade system
#include<stdio.h>
int main()
{
    float p;
    printf("Enter your percentage out of 100:-");
    scanf("%f",&p);

    int p1=(int)(p/10);

    switch(p1)
    {
        case 10: 
        case 9:
        case 8:
        case 7: printf("DISTINCTION");
        break;

        case 6:printf("FIRST CLASS");
        break;
        case 5:printf("SECOND CLASS");
        break;
        case 4:printf("PASS CLASS");
        break;
        default:printf("FAIL");    
    }


// if(p<40)
// {
//     printf("FAIL");
// }
// else if(40<p<=49)
// {
//     printf("you are pass");
// }
// else if(50<p<=59)
// {
//     printf("you have pass with class 2");
// }
// else if(60<p<=69)
// {
//     printf("you have pass with class 1");
// }
// else if(p>=70)
// {
//     printf("pass with distinction class");
// }
    return 0;
}

