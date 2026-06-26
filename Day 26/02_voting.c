//Voting Eligibility System
#include <stdio.h>
int main()
{
    int age;
    printf("Welcome to Voting Eligibility System!\n");
    printf("Just enter your age and check if you're eligible to vote or not!\n");
    printf("Enter your age:");
    scanf("%d",&age);
    if(age>=18 && age<=250)
    {
        printf("Congratulations!\nYou're eligible to vote!\n");
    }
    else if(age<18 && age>0)
    {
        printf("Unfortunately!\nYou're not eligible to vote!\n");
    }
    else
    {
        printf("Please enter the valid age!\n");
    }
    return 0;
}