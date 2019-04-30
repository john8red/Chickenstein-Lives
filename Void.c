/*
Name: John Runyan and Giovanny Sanchez
Program Name: Spanish Word Game
Instructor: Moruf Adegbite
Date: 4/30/2019
*/

#include <stdio.h>
#include <string.h>
#define SPANMAX 6


const int RAND[6] = {4, 2, 8, 6, 5, 3};
const char SPAN[10][12] = {"Abuela", "Isla", "Agua", "Tortilla", "Computadora", "Compadre", "Pantalla", "Pared", "Fresa", "Teclado"};
const char ENGL[10][12] = {"grandma", "island", "water", "tortilla", "computer", "partner", "screen", "wall", "strawberry", "keyboard"};

void wordGame();

int score = 0;

int main(){
	char y, Y; 
	char letter;

	int currentRand = 0;
	
	
	printf("This is the beginning of the game");
	printf("\nTo play this game, you must match the english word to the spanish word.");
	printf("\nDo you wish to continue? Y/N\n");
	scanf("%c", &letter);
	if (letter == 'y' || letter == 'Y'){
		printf("The game begins now.");
		wordGame();
	}
	else {
		printf("\nThe game is now ending\n");
	}
	
	return 0;
}


// this is the easiest way to check. 

void guess(int currentGuess, char guessString[]) {
	// strcmp returns 0 if all chars are the same and the length of the strings are the same
	int isValid = strcmp(guessString, ENGL[RAND[currentGuess]]);
	if(isValid == 0) {
		printf("You are correct\n");
	} else {
		printf("You are wrongo doggo, the answer is: ");
		puts(ENGL[RAND[currentGuess]]);
	}
}

void wordGame(){
	char currentAnswer[9];

	printf("\nThis game involves the use of spanish and english words.\n");
	printf("You must find the correct word to match to the spanish word.\n");
	printf("The first question and answer is an example of how the game should be played.\n");
	int SPANLength = sizeof(SPAN);
		for(int i = 0; i < SPANMAX; i++) {
			printf("Please translate: ");
			puts(SPAN[RAND[i]]);
			gets(currentAnswer);
			guess(i, currentAnswer);
		}
			printf("Thank you for playing!");
}

