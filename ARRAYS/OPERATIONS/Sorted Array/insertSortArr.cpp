// C++ program to implement insert operation in 
// an sorted array. 
#include <bits/stdc++.h> 
using namespace std; 

// Inserts a key in arr[] of given capacity. n is current 
// size of arr[]. This function returns n+1 if insertion 
// is successful, else n. 
int insertSorted(int arr[], int n, int key, int capacity) 
{ 
	// Cannot insert more elements if n is already 
	// more than or equal to capacity 
	if (n >= capacity) 
		return n; 

	int i; 
	for (i = n - 1; (i >= 0 && arr[i] > key); i--) 
		arr[i + 1] = arr[i]; 

	arr[i + 1] = key; 

	return (n + 1); 
} 

/* Driver code */
int main() 
{ 
	int arr[20] = { 12, 16, 20, 40, 50, 70 }; 
	int capacity = sizeof(arr) / sizeof(arr[0]); 
	int n = 6; 
	int i, key = 26; 

	cout << "\nBefore Insertion: "; 
	for (i = 0; i < n; i++) 
		cout << arr[i] << " "; 

	// Function call 
	n = insertSorted(arr, n, key, capacity); 

	cout << "\nAfter Insertion: "; 
	for (i = 0; i < n; i++) 
		cout << arr[i] << " "; 

	return 0; 
} 

// This code is contributed by SHUBHAMSINGH10
