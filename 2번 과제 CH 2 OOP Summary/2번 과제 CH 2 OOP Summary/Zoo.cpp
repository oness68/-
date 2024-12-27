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
	if (fullAnimal)//풀스택 예외처리
	{
		cout << "동물원이 가득 찼습니다.";
		return;
	}
		
	this->animals[animalCount] = animal;
	animalCount++;

	if(animalCount == 10)
		fullAnimal = true;

}

void Zoo::performActions()
{
	for (int i = 0; i < animalCount; i++)//순서대로 출력
	{
		this->animals[i]->makeSound();
	}

}

Zoo::~Zoo()
{
	cout << "Zoo소멸" << endl;
}
