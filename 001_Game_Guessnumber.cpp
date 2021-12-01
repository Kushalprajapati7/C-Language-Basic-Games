#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int number, guess, nguesses = 1;
	srand(time(0));
	number = rand() % 100 + 1; //Generates a random number between 1 to 100
	do
	{
		printf("Guess The Number Between 1 to 100.\n");
		scanf("%d", &guess);
		if (guess > number)
		{
			printf("\nLower Number Please !\n\n");
		}
		else if (guess < number)
		{
			printf("\nHigher Number Please !\n\n");
		}
		else
		{
			printf("*************************************************\n");
			printf("Congratulation.\nYou Guesed It in %d Attempts.\n", nguesses);
		}
		nguesses++;
	} while (guess != number);

	return 0;
}
