#include"SimpleVector.h"
#include<iostream>
#include<algorithm>

using namespace std;


template<typename T>
void SimpleVector<T>::resize(int size) // ������� resize
{
	if (size > this->currentSize)
	{
		T* temp = new T[size];
		int newSize = currentSize + size;
		memcpy(temp, this->data, sizeof(T) * this->currentSize);
		this->data = new T[size];
		memcpy(this->data, temp, sizeof(T) * size);
		currentCapacity = size;
		delete[] temp;
	}
}

template<typename T>
SimpleVector<T>::SimpleVector()// �⺻ ������
{
	data = new T[10];
	currentSize = 0;
	currentCapacity = 10;
}

template<typename T>
SimpleVector<T>::SimpleVector(int _capacity)//�Ķ���� ������
{
	data = new T[_capacity];
	currentSize = 0;
	currentCapacity = _capacity;
}

template<typename T>
SimpleVector<T>::SimpleVector(const SimpleVector& other)//���� ������
{
	this->currentCapacity = other.currentCapacity;
	this->currentSize = other.currentSize;
	this->data = new T[this->currentCapacity];
	

	for (int i = 0; i < this->currentSize; i++)
	{
		this->data[i] = other.data[i];
	}
}


template<typename T>
SimpleVector<T>::~SimpleVector()
{
	delete[] data;
}

template<typename T>
void SimpleVector<T>::push_back(const T& value)// �ǵ� ����
{

	if (currentSize < currentCapacity)
	{
		data[currentSize++] = value;
	}
	else
	{
		this->resize(currentSize+5); //������� 
		data[currentSize++] = value;
		
	}

}

template<typename T>
void SimpleVector<T>::pop_back()// �ǵ� ����
{
	if (currentSize < 0)
	{
		return;

	}
	data[currentSize--] = NULL; 
	if (currentSize < 0)
	{
		currentSize = 0;

	}
}

template<typename T>
int SimpleVector<T>::size() //���� ���� ������
{
	return currentSize;
}

template<typename T>
int SimpleVector<T>::capacity()//���� �� �뷮
{
	return currentCapacity;
}

template<typename T>
void SimpleVector<T>::sortData() // ������� sort
{
	sort(&data[0], &data[this->currentSize]);
}

template<typename T>
void SimpleVector<T>::getVector() const//���� ���
{
	for (int i = 0; i < currentSize; i++)
	{
		cout<<this->data[i]<<" ";
	}
}



int main()
{
	//SimpleVector<int> myvec;
	SimpleVector<int> myvec2(5);

	myvec2.push_back(10);
	myvec2.push_back(20);
	myvec2.push_back(80);
	myvec2.push_back(30);
	myvec2.push_back(60);
	myvec2.push_back(70);
	myvec2.push_back(30);

	//myvec2.getVector();
	
	//myvec2.pop_back();
	myvec2.getVector();

	cout << endl;

	myvec2.sortData();

	myvec2.getVector();

	
	//SimpleVector<int> copyvec(myvec2);

	//copyvec.getVector();
	/*myvec.push_back(1);
	myvec.push_back(2);
	myvec.push_back(3);

	myvec.getVector();


	myvec.pop_back();

	myvec.getVector();*/

}
