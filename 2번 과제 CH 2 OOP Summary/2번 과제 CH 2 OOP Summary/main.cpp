#include<iostream>
#include"Zoo.h"
#include"Animal.h"
using namespace std;


int main()
{
	Zoo myzoo;
	Dog dog;
	Cat cat;
	Cow cow;
	
	myzoo.addAnimal(&dog);
	myzoo.addAnimal(&cat);
	myzoo.addAnimal(&cow);
	myzoo.addAnimal(&cow);
	myzoo.addAnimal(&cat);
	myzoo.addAnimal(&dog);
	myzoo.addAnimal(&dog);
	myzoo.addAnimal(&dog);

	myzoo.performActions();

	
}