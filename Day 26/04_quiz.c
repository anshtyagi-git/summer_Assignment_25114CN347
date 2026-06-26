//Quiz Application
#include <stdio.h>
int main()
{
    int choice, score = 0;
    printf("=================================\n");
    printf("      Welcome to Quiz Game!\n");
    printf("=================================\n");
    printf("There are 5 questions.\n");
    printf("Each correct answer carries 1 mark.\n\n");
    // Question 1
    printf("Q1. What is the capital of India?\n");
    printf("1. Mumbai\n2. New Delhi\n3. Chennai\n4. Kolkata\n");
    printf("Enter your answer: ");
    scanf("%d", &choice);
    if(choice == 2)
    {
        printf("Correct!\n\n");
        score++;
    }
    else
    {
        printf("Wrong! Correct Answer: New Delhi\n\n");
    }
    // Question 2
    printf("Q2. Which planet is known as the Red Planet?\n");
    printf("1. Venus\n2. Earth\n3. Jupiter\n4. Mars\n");
    printf("Enter your answer: ");
    scanf("%d", &choice);
    if(choice == 4)
    {
        printf("Correct!\n\n");
        score++;
    }
    else
    {
        printf("Wrong! Correct Answer: Mars\n\n");
    }
    // Question 3
    printf("Q3. Who is known as the Father of the Nation?\n");
    printf("1. Mahatma Gandhi\n2. Jawaharlal Nehru\n3. Bhagat Singh\n4. Sardar Patel\n");
    printf("Enter your answer: ");
    scanf("%d", &choice);
    if(choice == 1)
    {
        printf("Correct!\n\n");
        score++;
    }
    else
    {
        printf("Wrong! Correct Answer: Mahatma Gandhi\n\n");
    }
    // Question 4
    printf("Q4. Which language is primarily used for system programming?\n");
    printf("1. Python\n2. Java\n3. C\n4. HTML\n");
    printf("Enter your answer: ");
    scanf("%d", &choice);
    if(choice == 3)
    {
        printf("Correct!\n\n");
        score++;
    }
    else
    {
        printf("Wrong! Correct Answer: C\n\n");
    }
    // Question 5
    printf("Q5. How many days are there in a leap year?\n");
    printf("1. 366\n2. 365\n3. 367\n4. 364\n");
    printf("Enter your answer: ");
    scanf("%d", &choice);
    if(choice == 1)
    {
        printf("Correct!\n\n");
        score++;
    }
    else
    {
        printf("Wrong! Correct Answer: 366\n\n");
    }
    // Final Score
    printf("=================================\n");
    printf("Quiz Completed!\n");
    printf("Your Score: %d/5\n", score);
    if(score == 5)
    {
        printf("Excellent! Perfect Score!\n");
    }
    else if(score >= 3)
    {
        printf("Good Job!\n");
    }
    else
    {
        printf("Better Luck Next Time!\n");
    }
    printf("=================================\n");
    
    return 0;
}