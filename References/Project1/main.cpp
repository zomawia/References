//Zomawia Sailo
//zomawia@gmail.com
//
// Create a struct repsenting qualities that a ferocious dinosaur might have (or whatever you want)
//
// (Return an Object)
// Create a function that make an instance of your structure and returns it.

// (Read an Object by Value)
// Create a function that prints data about your object to the screen.

// (Modify Object by Reference
// Create a function that overwrites or modifies the data in your object

#include "dino.h"
#include <iostream>

void main()
{
	const int ARRAY_SIZE = 2;
	Dino myDinos[ARRAY_SIZE];

	for (int i = 0; i < ARRAY_SIZE; ++i)
	{
		myDinos[i] = createDino();
		printDino(myDinos[i]);
		modifyDino(myDinos[i]);
		printDino(myDinos[i]);
	}

	system("pause");
}

