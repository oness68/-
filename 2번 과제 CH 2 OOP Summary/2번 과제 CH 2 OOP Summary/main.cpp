#include<iostream>
#include"Zoo.h"
#include"Animal.h"
using namespace std;


Animal* createRandomAnimal()
{
	int select = rand() % 3;
	switch (select)
	{
	case 0 :
		return new Dog;
		
	case 1:
		return new Cat;

	case 2:
		return new Cow;

	}
}

int main()
{
	Zoo myzoo;
	Dog dog;
	Cat cat;
	Cow cow;
	
	myzoo.addAnimal(createRandomAnimal());
	myzoo.addAnimal(createRandomAnimal());
	myzoo.addAnimal(createRandomAnimal());
	myzoo.addAnimal(createRandomAnimal());
	myzoo.addAnimal(createRandomAnimal());
	myzoo.addAnimal(createRandomAnimal());
	myzoo.addAnimal(createRandomAnimal());
	myzoo.addAnimal(createRandomAnimal());
	myzoo.performActions();

	cout << myzoo.getTotal() << endl;

	cout << "����� �ð��̴�..." << endl;
	for (int i = 0; i < 3; i++)
	{
		if (myzoo.DeleteAnimal())
		{
			cout << "�̷�... ������ �Ҿ���...\n" << endl;
		}
		else
		{
			cout << "�̷�... �ȳ�����... ����\n" << endl;
		}
	}
	myzoo.performActions();

	cout << myzoo.getTotal() << endl;
}