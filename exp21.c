#include<stdio.h>
int main()
{
    int phy,chem,bio,maths,com;
    float percentage;

    repeat:
    printf("\nEnter the marks you got in physics:-");
    scanf("%d",&phy);
    printf("\nEnter the marks you got in chemistry:-");
    scanf("%d",&chem);
    printf("\nEnter the marks you got in biology:-");
    scanf("%d",&bio);
    printf("\nEnter the marks you got in maths:-");
    scanf("%d",&maths);
    printf("\nEnter the marks you got in computer:-");
    scanf("%d",&com);
    if((phy>100 || phy<0) || (chem>100 || chem<0) || (bio>100 || bio<0) || (maths>100 || maths<0) || (com>100 || com<0))
    {
        printf("your input is wrong.marks should be less than or equal 100 and greater than or equal to 0.ENTER ANOTHER TIME..");
        goto repeat;
    }

    percentage=(phy+chem+bio+maths+com)/5;

    if(percentage>=90)
    {
        printf("you got %f %% percentage and A grade",percentage);
    }
    else if(percentage<90 && percentage>=80)
    {
        printf("you got %f %% percentage and B grade",percentage);
    }
    else if(percentage<80 && percentage>=70)
    {
        printf("you got %f %% percentage and C grade",percentage);
    }
    else if(percentage<70 && percentage>=60)
    {
        printf("you got %f %% percentage and D grade",percentage);
    }
    else if(percentage<60 && percentage>=40)
    {
        printf("you got %f %% percentage and E grade",percentage);
    }
    else if(percentage<40)
    {
        printf("you got %f %% percentage and F grade",percentage);
    }
    else
    { 
        printf("your input is wrong");
    }
    
    return 0;
}