// Simple CPP program to print squares of
// diagonal elements.
#include <iostream>
using namespace std;

#define MAX 100

// function of diagonal square
void diagonalsquare(int mat[][MAX], int row,
								int column)
{
	// This loop is for finding square of first
	// diagonal elements
	cout << "Diagonal one : ";
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)

			// if this condition will become true
			// then we will get diagonal element
			if (i == j)

				// printing square of diagonal element
				cout << mat[i][j] * mat[i][j] << " ";
	}

	// This loop is for finding square of second
	// side of diagonal elements
	cout << " \n\nDiagonal two : ";
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)

			// if this condition will become true
			// then we will get second side diagonal
			// element
			if (i + j == column - 1)

				// printing square of diagonal element
				cout << mat[i][j] * mat[i][j] << " ";
	}
}

// Driver code
int main()
{
	int mat[][MAX] = { { 2, 5, 7 },
					{ 3, 7, 2 },
					{ 5, 6, 9 } };
	diagonalsquare(mat, 3, 3);
	return 0;
}
