#pragma once
template <typename T>
class SimpleVector
{
	T *data;
	int currentSize;
	int currentCapacity;

protected:
	void resize(int size);
public:
	SimpleVector();
	SimpleVector(int _capacity);
	SimpleVector(const SimpleVector& other);
	~SimpleVector();

	void push_back(const T& value);
	void pop_back();
	int size();
	int capacity();
	void sortData();
	void getVector() const;


};

