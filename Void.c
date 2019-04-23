#include <stdio.h>

#define SPAN ["Abuela", "Isla", "Agua", "Tortilla", "Computadora", "Compadre", "Pantalla", "Pared", "Fresa", "Teclado"]
#define ENGL ["Grandma", "Island", "Water", "Taco", "Computer", "Partner", "Screen", "Wall", "Strawberry", "Keyboard"]
#define RAND [4, 6, 9, 1, 7]


int main(){
	char y, Y;
	char letter;
	
	char toupper(letter);
	
	void wordGame();
	
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

void wordGame(){
	printf("\nThis game involves the use of spanish and english words.\n");
	printf("You must find the correct word to match to the spanish word.\n");
	
}


//don't mind this yet just trying to figure out how to do this
//if anyone's looking at this am I comparing arrays correctly?
char guess

if (SPAN(RAND()) == ENGL(RAND()))
	printf("arr[%d]", SPAN(RAND()));
	scanf("%c", guess);
	if (ENGL(RAND()) == guess)
		prinf("You are correct");
	else
		printf("You are wrongo doggo");
