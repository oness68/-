#include<iostream>
using namespace std;

int sum(int array[],int size)
{
	int result=0;
	for (int i = 0; i < size; i++)
	{
		result += array[i];
	}
	return result;
}

double avg(int value,int size)//평균
{
	double result = (double)value / (double)size;
	return result;
}

void sort(int array[],int size,int mode)//삽입정렬
{
	int key, i, j;


	for (i = 1; i < size; i++)
	{
		key = array[i];// 비교용 키
		for (j = i - 1; j >= 0 ; j--)
		{
			if (array[j] > key)
			{
				//전 인덱스와 키 비교 전 인덱스를 순회 하면서 key보다 값이크면 
				array[j + 1] = array[j];//
			}
			else // 큰게 없으면 넘어가기
				break;
		}
		array[j + 1] = key;

	}



	if (mode == 2)//내림차순 정렬
	{
		i = 0;
		j = size - 1;
		int temp;
		for (i = 0; i <= j; i++)
		{
			temp = array[i];//대응된 위치와 스왑
			array[i] = array[j];
			array[j] = temp;

			j--;
		}
	}



}

void PrintArray(int array[],int size)
{
	cout << "배열 출력 :";
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;
}

int main()
{
	int length;
	
	while (1)
	{
		cout << "배열의 크기 입력(1이상) : ";
		cin >> length;

		if (length > 1)
			break;
	}
	
	
	int *value = new int[length];

	for (int i = 0; i < length; i++)
	{
		cout << i+1<<"번째 저장 할 숫자를 입력하세요 :";

		cin >> value[i];
	}
	int mode=1;
	cout << "1:오름차순 2:내림차순 입력->>(기본: 오름차순)";
	cin >> mode;

	cout << "정렬 전 : ";
	PrintArray(value, length);

	sort(value, length,mode);
	cout << "정렬 후 :";
	PrintArray(value, length);
	cout <<"저장된 배열의 합 : " << sum(value, length)<<endl;
	cout<< "저장된 배열의 평균 : " << avg(sum(value, length), length)<<endl;
	



	delete[] value;
	return 0;

}





