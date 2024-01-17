#include<iostream>
using namespace std;
int take(int n);		//will take input range
void sequence(int n);	//will display the sequence using a loop
int main()
{
	int N = 0;
	N = take(N);
	sequence(N);
	system("pause");
	return 0;
}

int take(int n)
{
	cout << "Enter number : ";
	cin >> n;
	return n;
}

void sequence(int n)
{
	int range = 0, next_term = 1;
	for (range; range < n; range++)
	{
		next_term = next_term + range; //as there is increment in the number that keeps getting added to the previous term

		if (range != n - 1)	//These if and else are used to put commas in appropriate place
		{
			cout << next_term << ",";
		}
		else if (range == n - 1)
		{
			cout << next_term << endl;
		}
	}
}