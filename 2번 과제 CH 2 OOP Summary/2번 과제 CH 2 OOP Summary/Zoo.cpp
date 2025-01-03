#include "Zoo.h"
#include<iostream>

Zoo::Zoo()
{
	arraysize = 3;
	fullAnimal = false;
	animals = new Animal[arraysize];
}

void Zoo::addAnimal(Animal* animal)
{
	if (fullAnimal)//풀스택 예외처리
	{
		cout << "동물원이 가득 찼습니다.";
		return;
	}
		
	Animal* tempanimals = new Animal[animalCount];
	memcpy(tempanimals, animals, sizeof(Animal) * animalCount);
	this->animalCount++;
	animals = new Animal[animalCount];
	memcpy(animals, tempanimals, sizeof(Animal) * (animalCount - 1));
	memcpy(&animals[animalCount - 1], animal, sizeof(Animal));

	if(animalCount == 10)
		fullAnimal = true;

}

bool Zoo::DeleteAnimal()
{
	try
	{
		Animal* tempanimals = new Animal[animalCount];
		memcpy(tempanimals, animals, sizeof(Animal) * animalCount - 1);
		this->animalCount--;
		animals = new Animal[animalCount];
		memcpy(animals, tempanimals, sizeof(Animal) * (animalCount));


		if (animalCount < 10)
			fullAnimal = false;
	}
	catch (const std::exception&)
	{
		return false;
	}
	
	return true;
}

void Zoo::performActions()
{
	for (int i = 0; i < animalCount; i++)//순서대로 출력
	{
		(&animals[i])->makeSound();
	}

}

Zoo::~Zoo()
{
	
	cout << "Zoo소멸" << endl;
	
}


