#include <stdio.h>
#include <string.h>

// #define SPAN []
// #define ENGL ["Grandma", "Island", "Water", "Taco", "Computer", "Partner", "Screen", "Wall", "Strawberry", "Keyboard"]

const int RAND[5] = {4, 6, 9, 1, 7};
const char SPAN[10][12] = {"Abuela", "Isla", "Agua", "Tortilla", "Computadora", "Compadre", "Pantalla", "Pared", "Fresa", "Teclado"};
const char ENGL[10][12] = {"Grandma", "Island", "Water", "Taco", "Computer", "Partner", "Screen", "Wall", "Strawberry", "Keyboard"};
// for something like this, its probably better to declare your functions outside of your main function
void wordGame();

int main(){
	char y, Y; // unused variables should probably remove. 
	char letter;

	int currentRand = 0;
	
	// letter = toupper(letter); // letter is empty right now, yeah? Wouldn't you want to run this after it was populated? 
	// also, if you are going to toupper it, you would want to toupper the engl answers
	
	
	printf("This is the beginning of the game");
	printf("\nTo play this game, you must match the english word to the spanish word.");
	printf("\nDo you wish to continue? Y/N\n");
	scanf("%c", &letter);
	if (letter == 'y' || letter == 'Y'){
		printf("The game begins now.\n");
		wordGame();
	}
	else {
		printf("\nThe game is now ending\n");
	}
	
	return 0;
}


// this is the easiest way to check. 
// Might be better if it was a pure function.
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
	int SPANLength = sizeof(SPAN);
	for(int i = 0; i < SPANLength; i++) {
		printf("Please translate: ");
		puts(SPAN[RAND[i]]);
		gets(currentAnswer);
		guess(i, currentAnswer);
	}
}

