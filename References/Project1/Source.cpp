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


#include <iostream>

struct Dino
{
	char Name[64], FavoriteAnime[64];
	int Age, Weight;
};

Dino createDino(Dino d)
{
	printf("DINOSAUR CREATION\n");
	printf("-----------------\n");	

	printf("Enter name: ");
	scanf_s("%s", d.Name, 64);	
	getchar();


	printf("Enter age and weight: ");
	scanf_s("%d %d", &d.Age, &d.Weight);	
	getchar();

	printf("Favorite anime? ");
	scanf_s("%s", d.FavoriteAnime, 64);
	getchar();
	
	return d;
}

void printDino(Dino d)
{	
	printf("\n\nFerocious Dinosaur Information:\n");
	printf("Name: %s\nAge: %d\nWeight: %d lbs.\nFav. Anime: %s\n\n\n", d.Name, d.Age, d.Weight, d.FavoriteAnime);
}

void modifyDino(Dino &d)
{
	printf("MODIFY DINOSAUR\n***************\n");

	printf("Enter name: ");
	scanf_s("%s", d.Name, 64);
	getchar();

	printf("Enter age and weight: ");
	scanf_s("%d %d", &d.Age, &d.Weight);
	getchar();

	printf("Favorite anime? ");
	scanf_s("%s", d.FavoriteAnime, 64);
	getchar();

}

void main()
{
	Dino myDino = {};

	myDino = createDino(myDino);
	printDino(myDino);

	modifyDino(myDino);
	printDino(myDino);

	system("pause");
}

