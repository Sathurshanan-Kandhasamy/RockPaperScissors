#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

int play(char, char);

int main()
{
	char user, computer, result;

	int n;
	srand(time(NULL));
	n = rand() % 100;
	if (n < 33)
	{
		computer = 'R';
	}
	else if (n > 33 && n < 66)
	{
		computer = 'P';
	}
	else
	{
		computer = 'S';
	}

	printf("Enter R, P, or S: ");
	scanf_s("%c", &user, 2);
	user = toupper(user);

	result = play(user, computer);
	switch (result)
	{
		case -1:
			printf("It's a tie.\n");
			break;
		case 1:
			printf("You win.\n");
			break;
		case 0:
			printf("You lose.\n");
			break;
	}
	
	printf("\nUser chose: %c\n", user);
	printf("Computer chose: %c\n", computer);

	return 0;
}

int play(char user, char computer)
{
	if (user == computer)
	{
		return -1;
	}
	else if (user == 'R' && computer == 'P')
	{
		return 0;
	}
	else if (user == 'P' && computer == 'R')
	{
		return 1;
	}
	else if (user == 'R' && computer == 'S')
	{
		return 1;
	}
	else if (user == 'S' && computer == 'R')
	{
		return 0;
	}
	else if (user == 'P' && computer == 'S')
	{
		return 0;
	}
	else if (user == 'S' && computer == 'P')
	{
		return 1;
	}
}