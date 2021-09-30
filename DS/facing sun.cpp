// C++ program to count buildings that can
// see sunlight.
#include <iostream>
using namespace std;

// Returns count buildings
// that can see sunlight
int countBuildings(int arr[], int n)
{
	// Initialuze result (Note that first building
	// always sees sunlight)
	int count = 1;

	// Start traversing element
	int curr_max = arr[0];
	for (int i = 1; i < n; i++) {
	
		// If curr_element is maximum
		// or current element is
		// equal, update maximum and increment count
		if (arr[i] > curr_max || arr[i] == curr_max) {
			count++;
			curr_max = arr[i];
		}
	}

	return count;
}

// Driver code
int main()
{
	int arr[] = { 7, 4, 8, 2, 9 };
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << countBuildings(arr, n);
	return 0;
}
