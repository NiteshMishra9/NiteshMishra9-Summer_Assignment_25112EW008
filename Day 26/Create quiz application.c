#include <stdio.h>

int main()
{
    int answer, score = 0;

    printf("===== QUIZ APPLICATION =====\n\n");

    // Question 1
    printf("1. What is the capital of India?\n");
    printf("1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 2)
    {
        printf("Correct!\n\n");
        score++;
    }
    else
    {
        printf("Wrong! Correct answer is Delhi.\n\n");
    }

    // Question 2
    printf("2. Which language is used for system programming?\n");
    printf("1. C\n2. HTML\n3. CSS\n4. SQL\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 1)
    {
        printf("Correct!\n\n");
        score++;
    }
    else
    {
        printf("Wrong! Correct answer is C.\n\n");
    }

    // Question 3
    printf("3. How many days are there in a week?\n");
    printf("1. 5\n2. 6\n3. 7\n4. 8\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 3)
    {
        printf("Correct!\n\n");
        score++;
    }
    else
    {
        printf("Wrong! Correct answer is 7.\n\n");
    }

    // Question 4
    printf("4. Which planet is known as the Red Planet?\n");
    printf("1. Earth\n2. Mars\n3. Jupiter\n4. Venus\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 2)
    {
        printf("Correct!\n\n");
        score++;
    }
    else
    {
        printf("Wrong! Correct answer is Mars.\n\n");
    }

    // Question 5
    printf("5. What is 10 + 20?\n");
    printf("1. 20\n2. 25\n3. 30\n4. 40\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 3)
    {
        printf("Correct!\n\n");
        score++;
    }
    else
    {
        printf("Wrong! Correct answer is 30.\n\n");
    }

    printf("===== QUIZ COMPLETED =====\n");
    printf("Your Score = %d out of 5\n", score);

    if(score == 5)
        printf("Excellent!\n");
    else if(score >= 3)
        printf("Good Job!\n");
    else
        printf("Better Luck Next Time!\n");

    return 0;
}