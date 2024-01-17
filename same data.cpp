#include<iostream>
using namespace std;
bool searchIndexToIndex(int data[], int size, int i, int j, int key); //checks if the given key is present in the array
bool sameData(int data1[], int data2[], int size); //if all keys of 1st array are present in the second array, then it returns true, else false
int main()
{
	int size = 0;
	cout << "Enter size : ";
	cin >> size;
	int array1[100], array2[100];
	if (sameData(array1, array2, size) == true)
	{
		cout << "True" << endl;
	}
	else
	{
		cout << "False" << endl;
	}
	system("pause");
	return 0;
}

bool sameData(int data1[], int data2[], int size)
{
	int count = 0;
	cout << "Enter data for 1st array : ";
	for (int i = 0; i < size; i++)
	{
		cin >> data1[i];
	}
	cout << "Enter data for 2nd array : ";
	for (int j = 0; j < size; j++)
	{
		cin >> data2[j];
	}
	for (int k = 0; k < size; k++)	//it will compare a value of 1st array to the values of the second array, and return true
									//if it is present, else false
	{
		if (searchIndexToIndex(data2, size, 0, size - 1, data1[k]) == true)
		{
			count++;
		}
	}
	if (count == size)	//if all values of 1st array are present in 2nd array, then number of same values i.e. count will become equal
						//to both of the array's size
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool searchIndexToIndex(int data[], int size, int i, int j, int key)
{
	int count = 0;
	for (int l = i; l <= j; l++)
	{
		if (key == data[l]) //checks if it is present in the array
		{
			count++;  //tells how many times it is present in the array
		}
	}
	if (count > 0) //if it is present even once,means it will be true
	{
		return true;
	}
	else
	{
		return false;
	}
}