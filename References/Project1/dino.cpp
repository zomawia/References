// Zomawia Sailo <zomawia@gmail.com>


#include "dino.h"
#include <iostream>

Dino createDino()
{
	Dino d = {};

	printf("--------DINOSAUR CREATION--------\n");
	printf("--------/^^-----------^^}--------\n");
	printf("-------/    o       o    }-------\n");
	printf("-------|   ~T   Y   T~   |-------\n");
	printf("--------\__  ++-|-++  __/--------\n");
	printf("-----------\           }---------\n");

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

void printDino(const Dino &d)
{
	printf("\nFerocious Dinosaur Information:\n");
	printf("Name: %s\nAge: %d\nWeight: %d lbs.\nFav. Anime: %s\n\n\n", d.Name, d.Age, d.Weight, d.FavoriteAnime);
}

void modifyDino(Dino &d)
{
	printf("-G R O W I N G   D I N O S A U R-\n");
	printf("--------/^^-----------^^}--------\n");
	printf("-------/    O^      O^   }-------\n");
	printf("-------|   []   T  []    |-------\n");
	printf("--------\__  U=U=u=UU  _/--------\n");
	printf("-----------\           }---------\n");

	d.Weight *= d.Weight = d.Age += d.Weight;

}