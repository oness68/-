#pragma once
#include <string>
#include<iostream>
using namespace std;

class Animal
{

public:
	virtual void makeSound()=0;

	~Animal() { cout << "Animal ¼Ò¸ê" << endl; }
};

class Dog : public Animal
{
private:
	string Animalname = "Dog";
public:
	void makeSound();
	
};

class Cat : public Animal
{
private:
	string Animalname = "Cat";

public:

	void makeSound();

};


class Cow : public Animal
{
private:
	string Animalname = "Cow";
public:
	void makeSound();

};


