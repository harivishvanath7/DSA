#include <iostream>
#include <array>
#include <algorithm>  // For std::sort

using namespace std;

// 1. std::array is a container that encapsulates fixed size arrays.
// 2. array size is needed at compile time.
// 3. Assign by value is actually by value.
// 4. Access Elements:
//    a. at() ,                at() gives arrayOutOfBound but arr[] doesnt.
//    b. []
//    c. front()
//    d. back()
//    e. data() // gives access to the underlying array

int main() {
    // Creating an array of integers with 5 elements
    array<int, 5> arr = {5, 2, 9, 1, 6};

    // Displaying the elements of the array
    cout << "Array elements: ";
    for (int elem : arr) {
        cout << elem << " ";
    }
    cout << endl;

    // Accessing elements using operator[]
    cout << "Element at index 2: " << arr[2] << endl;

    // Accessing elements using at()
    cout << "Element at index 3: " << arr.at(3) << endl;

    // Accessing the first element using front()
    cout << "First element: " << arr.front() << endl;

    // Accessing the last element using back()
    cout << "Last element: " << arr.back() << endl;

    // Getting the size of the array
    cout << "Array size: " << arr.size() << endl;

    // Checking if the array is empty
    cout << "Is array empty? " << (arr.empty() ? "Yes" : "No") << endl;

    // Filling the array with a specific value
    arr.fill(10);
    cout << "Array after fill: ";
    for (int elem : arr) {
        cout << elem << " ";
    }
    cout << endl;

    // Swapping the contents of two arrays
    array<int, 5> arr2 = {7, 8, 3, 4, 0};
    arr.swap(arr2);
    cout << "Array after swap with arr2: ";
    for (int elem : arr) {
        cout << elem << " ";
    }
    cout << endl;

    // Sorting the array
    sort(arr.begin(), arr.end());
    cout << "Sorted array: ";
    for (int elem : arr) {
        cout << elem << " ";
    }
    cout << endl;

    // Using data() to get a pointer to the underlying array
    int* data = arr.data();
    cout << "Array elements using data(): ";
    for (size_t i = 0; i < arr.size(); ++i) {
        cout << data[i] << " ";
    }
    cout << endl; 

    return 0;
}
