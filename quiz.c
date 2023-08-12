#include <stdio.h>
#include <string.h>

int askQuestion(const char *question, const char *options[], int numOptions)
{
    int answer;
    printf("%s\n", question);
    for (int i = 0; i < numOptions; i++)
    {
        printf("%d. %s\n", i + 1, options[i]);
    }
    printf("Your answer (1-%d): ", numOptions);
    scanf("%d", &answer);
    return answer;
}

int main()
{
    int score = 0;
    printf("Welcome to the Quiz App!\n\n");

    // question 1
    const char *options1[] = {"kabul", "kathmandu", "paris", "Delhi"};
    int ans1 = askQuestion("What is the capital of France?", options1, 4);
    if (ans1 == 3)
    {
        printf("Correct!\n");
        score++;
    }
    else
    {
        printf("Incorrect. The correct answer is Option 3.\n");
    }

    // question 2
    const char *options2[] = {"mars", "Venus", "Mercury", "Jupiter"};
    int ans2 = askQuestion("Which planet is known as the 'Red Planet'?", options2, 4);
    if (ans2 == 1)
    {
        printf("Correct!\n");
        score++;
    }
    else
    {
        printf("Incorrect. The correct answer is Option 3.\n");
    }
    // question 3

    const char *options3[] = {"Lion", "Elephant", "Giraffe", "Blue Whale"};
    int ans3 = askQuestion("What is the largest mammal?", options3, 4);
    if (ans3 == 4)
    {
        printf("Correct!\n");
        score++;
    }
    else
    {
        printf("Incorrect. The correct answer is Option 1.\n");
    }

    // question 4
    const char *options4[] = {"Earth", "Saturn", "Mars", "Jupiter"};
    int ans4 = askQuestion("What is the largest planet in our solar system?", options4, 4);
    if (ans4 == 4)
    {
        printf("Correct!\n");
        score++;
    }
    else
    {
        printf("Incorrect. The correct answer is Option 4.\n");
    }

    // question 5
    const char *options5[] = {"1 march", "2 september", "10 november", "5 june"};
    int ans5 = askQuestion("Which day is celebrated as Environment Day?", options5, 4);
    if (ans5 == 4)
    {
        printf("Correct!\n");
        score++;
    }
    else
    {
        printf("Incorrect. The correct answer is Option 4.\n");
    }

    // question 6
    const char *options6[] = {"fawn", "kitten", "foal", "calf"};
    int ans6 = askQuestion(" Baby of a horse is known as.........", options6, 4);
    if (ans6 == 3)
    {
        printf("Correct!\n");
        score++;
    }
    else
    {
        printf("Incorrect. The correct answer is Option 4.\n");
    }

    printf("\nQuiz completed! Your score: %d out of 6\n", score);

    return 0;
}
