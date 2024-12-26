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

double avg(int value,int size)//���
{
	double result = (double)value / (double)size;
	return result;
}

void sort(int array[],int size,int mode)//��������
{
	int key, i, j;


	for (i = 1; i < size; i++)
	{
		key = array[i];// �񱳿� Ű
		for (j = i - 1; j >= 0 ; j--)
		{
			if (array[j] > key)
			{
				//�� �ε����� Ű �� �� �ε����� ��ȸ �ϸ鼭 key���� ����ũ�� 
				array[j + 1] = array[j];//
			}
			else // ū�� ������ �Ѿ��
				break;
		}
		array[j + 1] = key;

	}



	if (mode == 2)//�������� ����
	{
		i = 0;
		j = size - 1;
		int temp;
		for (i = 0; i <= j; i++)
		{
			temp = array[i];//������ ��ġ�� ����
			array[i] = array[j];
			array[j] = temp;

			j--;
		}
	}



}

void PrintArray(int array[],int size)
{
	cout << "�迭 ��� :";
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
		cout << "�迭�� ũ�� �Է�(1�̻�) : ";
		cin >> length;

		if (length > 1)
			break;
	}
	
	
	int *value = new int[length];

	for (int i = 0; i < length; i++)
	{
		cout << i+1<<"��° ���� �� ���ڸ� �Է��ϼ��� :";

		cin >> value[i];
	}
	int mode=1;
	cout << "1:�������� 2:�������� �Է�->>(�⺻: ��������)";
	cin >> mode;

	cout << "���� �� : ";
	PrintArray(value, length);

	sort(value, length,mode);
	cout << "���� �� :";
	PrintArray(value, length);
	cout <<"����� �迭�� �� : " << sum(value, length)<<endl;
	cout<< "����� �迭�� ��� : " << avg(sum(value, length), length)<<endl;
	



	delete[] value;
	return 0;

}





