#include <iostream>
using namespace std;

const int N = 5;

void inputMatrix(double[][N]);

void findLocalMax(const double[][N], bool[][N]);

void showMatrix(const bool[][N]);

int main()
{
	double A[N][N];
	bool B[N][N];
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A, B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}

// Do not modify source code above this line
void inputMatrix(double a[][N])
{

	for (int i = 0; i < N; i++)
	{
		cout << "Row " << i + 1 << ": ";
		for (int j = 0; j < N; j++)
		{
			cin >> a[i][j];
		}
	}
}

void findLocalMax(const double a[][N], bool b[][N])
{

	double x;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			x = a[i][j];
			if (j == 0 || j == N - 1 || i == 0 || i == N - 1)
			{
				b[i][j] = false;
			}
			else if (x >= a[i - 1][j] && x >= a[i + 1][j] && x >= a[i][j - 1] && x >= a[i][j + 1])
			{
				b[i][j] = true;
			}
			else
			{
				b[i][j] = false;
			}
		}
	}
}

void showMatrix(const bool a[][N])
{

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}
}