#include <bits/stdc++.h>
using namespace std;

void selSort(int arr[], int n){

	int i,j, min_index;

	for(int i=0; i < n-1; i++)
	{
		min_index = i;

		for(int j=i; j < n; j++)
		{
			if(arr[j] < arr[min_index])
				swap(arr[min_index], arr[j]);
		}

	}
}

// Function to print an array 
void printArray(int arr[], int size) 
{ 
    int i; 
    for (i = 0; i < size; i++) { 
        cout << arr[i] << " "; 
        cout << endl; 
    } 
} 
  
// Driver program 
int main() 
{ 
    int arr[] = { 56, 1, 72, 3, 102, 96 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
  
    // Function Call 
    selSort(arr, n); 
    cout << "Sorted array: \n"; 
    printArray(arr, n); 
    return 0; 
} 