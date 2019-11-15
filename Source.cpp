#include<stdio.h>


using namespace std;

int main() {

	//variables to hold character scores
	int Reinhardt = 0;
	int Soldier = 0;
	int Junkrat = 0;
	int Mercy = 0;
	char input; //user input


	//question 1
	printf("Whats most important to you?");
	printf("H- Honor, R- Respect, S- Supporting Others\n ");
	scanf_s(" %c", &input); //gets keyboard input, stores into variable
	if (input == 'H') //checks if input contains an 'H'
		Reinhardt++; //if it does, add to reinhardt's score
	else if (input == 'R')
		Soldier++;
	else if (input == 'S')
		Mercy++;
	else //all other options INCLUDING nonsense go here
		Junkrat++;



	//question 2
	printf("What would you be best at? \n");
	printf("H- Healing, A -Attacking, D- Defending \n");
	scanf_s(" %c", &input);
	if (input == 'D')
		Reinhardt++;
	else if (input == 'A')
		Soldier++;
	else if (input == 'H')
		Mercy++;
	else //all other options INCLUDING nonsense go here
		Junkrat++;

	//question 3
	printf("What personality matches you best? \n ");
	printf( "J- Joyful, G- Grumpy, S- Sweet \n ");
	scanf_s(" %c", &input);
	if (input == 'J')
		Reinhardt++;
	else if (input == 'G')
		Soldier++;
	else if (input == 'S')
		Mercy++;
	else //all other options INCLUDING nonsense go here
		Junkrat++;

	//question 4
	printf("What body shape are you? \n ");
	printf( "C- Chunky, M- Muscles, S- Smoll \n ");
	scanf_s(" %c", &input);
	if (input == 'C')
		Reinhardt++;
	else if (input == 'M')
		Soldier++;
	else if (input == 'S')
		Mercy++;
	else //all other options INCLUDING nonsense go here
		Junkrat++;

	//question 5
	printf("What type of armor would you wear? \n");
	printf("H- Heavy Armor, L- Lightweight Armor, N- None \n ");
	scanf_s(" %c", &input);
	getchar();
	if (input == 'H')
		Reinhardt++;
	else if (input == 'L')
		Soldier++;
	else if (input == 'N')
		Mercy++;
	else //all other options INCLUDING nonsense go here
		Junkrat++;



	//check which princess has the most points
	if (Reinhardt >= Junkrat && Reinhardt >= Mercy && Reinhardt >= Soldier) //checks if reinhardt has the biggest score
		printf("You are Reinhardt!  \n");
	else if (Junkrat >= Soldier && Junkrat >= Mercy && Junkrat >= Reinhardt) //add more code here
		printf("You are junkrat! \n");
	else if (Mercy >= Soldier && Mercy >= Junkrat && Mercy >= Reinhardt) //add more code here
		printf("You are mercy! \n");
	else if (Soldier >= Mercy && Soldier >= Junkrat && Soldier >= Reinhardt) //add more code here
		printf("You are Soldier! \n" );
}
