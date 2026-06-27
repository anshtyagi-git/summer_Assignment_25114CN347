//Marksheet Generation System
#include <stdio.h>
struct student
{
    int roll;
    char name[50];
    float english,maths,physics,chemistry,ip;
    float total,percentage;
    char division[20];
};
int main()
{
    struct student s;
    printf("===== MARKSHEET GENERATION SYSTEM =====\n\n");
    printf("Enter Roll Number:");
    scanf("%d", &s.roll);
    printf("Enter Student Name:");
    scanf(" %s", s.name);
    printf("Enter Marks in English:");
    scanf("%f",&s.english);
    printf("Enter Marks in Mathematics:");
    scanf("%f",&s.maths);
    printf("Enter Marks in Physics:");
    scanf("%f",&s.physics);
    printf("Enter Marks in Chemistry:");
    scanf("%f",&s.chemistry);
    printf("Enter Marks in Informatics Practices:");
    scanf("%f",&s.ip);
    s.total=s.english+s.maths+s.physics+s.chemistry+s.ip;
    s.percentage = s.total/5;
    if(s.percentage>=60)
        sprintf(s.division, "First");
    else if(s.percentage>=45)
        sprintf(s.division, "Second");
    else if(s.percentage>=33)
        sprintf(s.division, "Third");
    else
        sprintf(s.division, "Fail");
    printf("\n\n========== MARKSHEET ==========\n");
    printf("Roll Number : %d\n",s.roll);
    printf("Name        : %s\n",s.name);
    printf("\n-------------------------------------------\n");
    printf("Subject\t\t\tMarks\n");
    printf("-------------------------------------------\n");
    printf("English\t\t\t%.2f\n",s.english);
    printf("Mathematics\t\t%.2f\n",s.maths);
    printf("Physics\t\t\t%.2f\n",s.physics);
    printf("Chemistry\t\t%.2f\n",s.chemistry);
    printf("Informatics Practices\t%.2f\n",s.ip);
    printf("-------------------------------------------\n");
    printf("Total       : %.2f / 500\n",s.total);
    printf("Percentage  : %.2f%%\n",s.percentage);
    printf("Division    : %s\n",s.division);
    return 0;
}