#pragma once
#include <string>
#include "Animal.h"


using namespace std;


const int Addsize = 5;

class Zoo
{
	int arraysize;
	Animal* animals;
	int animalCount=0;
	bool fullAnimal;
public:

	Zoo();
	void addAnimal(Animal* animal);
	void performActions();
	bool DeleteAnimal();
	~Zoo();
	int getAnimalCount() { return animalCount;};
	Animal* getAnimalArray(int index) { return &animals[index]; }
	int getTotal() {return sizeof(animals);}
	
};
