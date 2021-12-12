#include <stdio.h>
#include <stdlib.h>

int main()
{

	char ch;
	do {

		int i = 8;
		int rval;
		int val;
		int flag = 1;


		printf("|************************************************|\n");
		printf("|*******/ Welcome to Game of guess it \\**********|\n");
		printf("|************************************************|");
		printf("\n\nPlayer 1 choose a number between 1 and 1000:- ");
		scanf_s("%d", &rval);
		puts("\n");

		puts("|***************************************************|\n"
			"|           Pass the PC to Player 2                 |\n"
			"|    Player 2 will try to guess the number          |\n"
			"| Player 2 will have 6 tries to guess the number    |\n"
			"|***************************************************|\n");

		for (i = 1; i <= 6; i++)
		{
			printf("\nEnter your Guess:- ");
			scanf_s("%d", &val);

			while (!(val >= 0 && val <= 1000)) {
				printf("\nIllegal guess, Guess should be between 1 and 100");
				scanf_s("%d", &val);
			}
			if (val > rval)
				printf("Too High!");
			else if (val < rval)
				printf("Too Low !");
			else
			{
				flag = 0;
				break;
			}
		}
		if (flag)

			printf("\n\n*** You don't have more tries ***");
		else
			printf("*********CORRECT*******");

		printf("\nWanna Play again (Y/N)? ");
		scanf_s(" %c", &ch);

	} while (ch == 'y' || ch == 'Y');
	printf("\nGoodbye, it was fun \nHope to play Guess it with you again soon \n");
	return 0;
}