//Austin Klevgaard
//CMPE 1700
//ICA05 - Header File
//Program: Card Deck Creater

#pragma once
//Initializes the enumeration for the suits of the generated cards and creates the typedef
enum suits { Clubs=0, Diamonds, Hearts, Spades };
typedef enum suits suits;

//Initializes the enumeration for the face value of the card and creates the typedef
enum cardValues { deuce=2, three, four, five, six, seven, eight, nine, ten, jack, queen, king, ace };
typedef enum cardValues cardValues;

//prototype for the function used to create the card based on enumeration values
char* GetName(enum suits suits, enum cardValues cardValues);

//structure of the card. Contains 2 members that hold card data: it's suit, and its face value.
struct Card
{
	//holds enumeration of card's suit
	suits cardSuit;
	//holds enumeration of cards value
	cardValues cardVal;
};

