// Zomawia Sailo <zomawia@gmail.com>
#pragma once

/*
	Header files are for declarations.
	Source files are for definitions.
*/


struct Dino
{
	char Name[64], FavoriteAnime[64];
	int Age, Weight;
};

Dino createDino();

void printDino(const Dino &d);

void modifyDino(Dino &d);

