#include "Zoo.h"
#include<iostream>

Zoo::Zoo()
{
	animalCount=0;
	arraysize = Maxsize;
	fullAnimal = false;
	for (int i = 0; i < Maxsize; i++)
	{
		animals[i] = nullptr;
	}

}

void Zoo::addAnimal(Animal* animal)
{
	if (fullAnimal)//Ǯ���� ����ó��
	{
		cout << "�������� ���� á���ϴ�.";
		return;
	}
		
	this->animals[animalCount] = animal;
	animalCount++;

	if(animalCount == 10)
		fullAnimal = true;

}

void Zoo::performActions()
{
	for (int i = 0; i < animalCount; i++)//������� ���
	{
		this->animals[i]->makeSound();
	}

}

Zoo::~Zoo()
{
	cout << "Zoo�Ҹ�" << endl;
}
