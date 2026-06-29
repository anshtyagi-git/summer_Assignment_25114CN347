//Menu-driven String Operations System
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100],str2[100],copy[100];
    int choice;
    do
    {
        printf("\n===== STRING OPERATIONS MENU =====\n");
        printf("1. Enter String\n");
        printf("2. Display String\n");
        printf("3. Find Length\n");
        printf("4. Copy String\n");
        printf("5. Concatenate Strings\n");
        printf("6. Compare Strings\n");
        printf("7. Reverse String\n");
        printf("8. Exit\n");
        printf("Enter your choice:");
        scanf("%d",&choice);
        getchar();
        switch(choice)
        {
            case 1:
            {
                printf("Enter a string:");
                gets(str1);
                break;
            }
            case 2:
            {
                printf("String = %s\n",str1);
                break;
            }
            case 3:
            {
                printf("Length = %d\n",strlen(str1));
                break;
            }
            case 4:
            {
                strcpy(copy,str1);
                printf("Copied String = %s\n",copy);
                break;
            }
            case 5:
            {
                printf("Enter another string:");
                gets(str2);
                strcat(str1,str2);
                printf("Concatenated String = %s\n",str1);
                break;
            }
            case 6:
            {
                printf("Enter another string:");
                gets(str2);
                if(strcmp(str1,str2)==0)
                {
                    printf("Both strings are equal.\n");
                }
                else
                {
                    printf("Strings are not equal.\n");
                }
                break;
            }
            case 7:
            {
                strrev(str1);
                printf("Reversed String = %s\n",str1);
                break;
            }
            case 8:
            {
                printf("Exiting Program...\n");
                break;
            }
            default:
            {
                printf("Invalid Choice!\n");
                break;
            }
        }
    }
    while(choice!=8);
    return 0;
}