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
	if (fullAnimal)//Ǯ���� ����ó��
	{
		cout << "�������� ���� á���ϴ�.";
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
	for (int i = 0; i < animalCount; i++)//������� ���
	{
		(&animals[i])->makeSound();
	}

}

Zoo::~Zoo()
{
	
	cout << "Zoo�Ҹ�" << endl;
	
}


