#include <iostream>
using namespace std;

template <typename T>
void insertionSort(T d[], int N)
{
	T x;
	for (int i = 1; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			x = d[i - j];

			if (x > d[i - j - 1])
			{
				d[i - j] = d[(i - j) - 1];

				d[i - j - 1] = x;
				if (i - j - 1 == 0)
				{
					break;
				}
			}
			else
				break;
		}
		cout << "Pass " << i << ":";
		for (int k = 0; k < N; k++)
		{
			cout << d[k] << " ";
		}
		cout << "\n";
	}
}

int main()
{
	int a[10] = {12, 25, 30, 44, 2, 0, 4, 7, 55, 25};
	cout << "Input Array:";
	for (int i = 0; i < 10; i++)
		cout << a[i] << " ";
	cout << "\n\n";

	insertionSort(a, 10);

	cout << "\nSorted Array:";
	for (int i = 0; i < 10; i++)
		cout << a[i] << " ";
}
