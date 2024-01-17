#include<iostream>
using namespace std;
void moveToEnd(int data[], int size); //moves all zeros to the rightmost side
void take(int a[], int n); //takes array elements as input
void display(int a[], int n); //displays the updated array
int main()
{
	int size = 10;
	cout << "Enter size : ";
	cin >> size;
	int array[100];
	take(array, size);
	moveToEnd(array, size);
	display(array, size);
	system("pause");
	return 0;
}

void take(int a[], int n)
{
	cout << "Input : ";
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}

void moveToEnd(int data[], int size)
{
	int temp = 0; //used for swapping later
	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (data[i] == 0)		//if we get a zero, it gets swapped gradually
			{				//until it reaches the end, keeping the same
							//order of the given array, except for the
							//zeros
				temp = data[i];
				data[i] = data[j];
				data[j] = temp;
			}
		}
	}
}

void display(int a[], int n)
{
	cout << "Updated array : ";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
}