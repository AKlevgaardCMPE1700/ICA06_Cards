//Austin Klevgaard
//CMPE 1700
//ICA05 - cards.c
//Program: Card Deck Creater

#include <stdio.h>
#include <stdlib.h>
#include "cards.h"
#include <string.h>

//Program: creates an ordered card deck then prints each cards suit and face value in sequence.
int main(int argc, char* argv)
{

	char* deck[4][15];			//2D array pointer used to hold card data for the whole deck
	char cardData[20];			//char array  used to hold the data of an individual card
	struct Card card;			//structure used to hold and pass on the value of card enumeration to be converted to strings

	//Loops used to generate ordered deck and cycle through
	//Outer loop is used to cycle through the suits of the deck
	for (int i = 0; i < 4; i++)
	{
		//sets card suit enumeration value to outer loop value
		card.cardSuit = i;
		//inner loop is used to cycle through face values of deck
		for (int j = 2; j <= 14; j++)
		{
			//sets card value enumeration to value of loop
			card.cardVal = j;
			//copies of a single card into the cardData array
			strcpy(cardData, GetName(card.cardSuit, card.cardVal));

			//copies the value of the card into the deck and prints the value of the card to the console.
			deck[i][j] = cardData;
			printf("%s\n", cardData);
		}
		//adds a space between suits to view output better
		printf("\n");
	}
	//exits the program
	exit(EXIT_SUCCESS);
}

//Name: char* GetName(enum suits suits, enum cardValues cardValues)
//Purpose: Gets the suit and face value of a card from a deck
//Parameters:	enum suits suits: enumeration of names for the suits of the deck
//				enum cardValues cardValues: enumeration of the face values of the deck of cards
char* GetName(enum suits suits, enum cardValues cardValues)
{
	char suitType[20] = { '\0' };		//string of suit type passed from suits enumeration values
	char value[20] = { '\0' };			//string of card face value passed from cardValues enumeration values
	char cardName[20] = { '\0' };		//name of the card that will be passed back to the main program				

	//switch statement used to select the card suit based on passed integer value from the main program to select enumeration
	switch (suits)
	{
	case Clubs:
		strcpy(suitType, "Clubs");
		break;
	case Diamonds:
		strcpy(suitType, "Diamonds");
		break;
	case Hearts:
		strcpy(suitType, "Hearts");
		break;
	case Spades:
		strcpy(suitType, "Spades");
		break;
	}
	//switch statement used to select the card face value based on passed integer value from the main program to select enumeration
	switch (cardValues)
	{
	case deuce:
		strcpy(value, "Deuce");
		break;
	case three:
		strcpy(value, "Three");
		break;
	case four:
		strcpy(value, "Four");
		break;
	case five:
		strcpy(value, "Five");
		break;
	case six:
		strcpy(value, "Six");
		break;
	case seven:
		strcpy(value, "Seven");
		break;
	case eight:
		strcpy(value, "Eight");
		break;
	case nine:
		strcpy(value, "Nine");
		break;
	case ten:
		strcpy(value, "Ten");
		break;
	case jack:
		strcpy(value, "Jack");
		break;
	case queen:
		strcpy(value, "Queen");
		break;
	case king:
		strcpy(value, "King");
		break;
	case ace:
		strcpy(value, "Ace");
		break;
	}

	//Concatonates the value and suit into a single char array
	strcat(cardName, value);
	strcat(cardName, " of ");
	strcat(cardName, suitType);

	//returns final card value char array back to the main program.
	return cardName;
}