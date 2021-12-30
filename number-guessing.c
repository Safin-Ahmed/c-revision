#include <stdio.h>
int main()
{
    const int MIN = 1;
    const int MAX = 100;
    int guess;
    int guesses = 0;
    int answer;

    // uses the current time as a seed to generate random numbers
    srand(time(0));
    answer = (rand() % MAX) + MIN;

    do
    {
        printf("Enter a guess: ");
        scanf("%d", &guess);
        if (guess > answer)
        {
            printf("Too High!\n");
        }
        else if (guess < answer)
        {
            printf("Too Low!\n");
        }
        else
        {
            printf("CORRECT!");
        }
        guesses++;
    } while (guess != answer);
    printf("***********************\n");
    printf("answer: %d\n", answer);
    printf("guesses: %d\n", guesses);
    printf("***********************\n");
    return 0;
}