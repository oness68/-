#pragma once
#include <string>
#include "Animal.h"
using namespace std;

const int Maxsize=10;
const int Addsize = 5;
class Zoo
{
	
	int arraysize;
	Animal* animals[Maxsize];
	int animalCount;
	bool fullAnimal;
public:

	Zoo();
	void addAnimal(Animal* animal);
	void performActions();
	~Zoo();
	int getAnimalCount() { return animalCount;};
	Animal* getAnimalArray(int index) { return animals[index]; }
};
