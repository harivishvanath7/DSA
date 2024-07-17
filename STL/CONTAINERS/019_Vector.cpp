#include <iostream>
#include <vector>
#include <algorithm> // For std::sort, std::reverse

using namespace std;

int main() {
    // Creating a vector of integers
    vector<int> vec = {5, 2, 9, 1, 6};

    // Displaying the elements of the vector
    cout << "Vector elements: ";
    for (int elem : vec) {
        cout << elem << " ";
    }
    cout << endl;

    // ELEMENT ACCESS
    // Accessing elements using at()
    cout << "Element at index 2 using at(): " << vec.at(2) << endl;

    // Accessing elements using operator[]
    cout << "Element at index 3 using []: " << vec[3] << endl;

    // Accessing the first element using front()
    cout << "First element using front(): " << vec.front() << endl;

    // Accessing the last element using back()
    cout << "Last element using back(): " << vec.back() << endl;

    // Using data() to get a pointer to the underlying array
    int* data_ptr = vec.data();
    cout << "First element using data(): " << *data_ptr << endl;

    // MODIFIERS
    // Adding an element to the end using push_back()
    vec.push_back(10);
    cout << "Vector after push_back(10): ";
    for (int elem : vec) {
        cout << elem << " ";
    }
    cout << endl;

    // Adding an element to the end using emplace_back()
    vec.emplace_back(12);
    cout << "Vector after emplace_back(12): ";
    for (int elem : vec) {
        cout << elem << " ";
    }
    cout << endl;

    // Inserting an element at a specific position using insert()
    vec.insert(vec.begin() + 2, 15);
    cout << "Vector after insert(15 at index 2): ";
    for (int elem : vec) {
        cout << elem << " ";
    }
    cout << endl;

    // Inserting an element at a specific position using emplace()
    vec.emplace(vec.begin() + 3, 18);
    cout << "Vector after emplace(18 at index 3): ";
    for (int elem : vec) {
        cout << elem << " ";
    }
    cout << endl;

    // Removing the last element using pop_back()
    vec.pop_back();
    cout << "Vector after pop_back(): ";
    for (int elem : vec) {
        cout << elem << " ";
    }
    cout << endl;

    // Erasing an element at a specific position using erase()
    vec.erase(vec.begin() + 2);
    cout << "Vector after erase(element at index 2): ";
    for (int elem : vec) {
        cout << elem << " ";
    }
    cout << endl;

    // Resizing the vector
    vec.resize(6, 3); // Resize to 6 elements, new elements initialized to 3
    cout << "Vector after resize(6, 3): ";
    for (int elem : vec) {
        cout << elem << " ";
    }
    cout << endl;

    // Swapping contents with another vector
    vector<int> vec2 = {100, 200, 300};
    vec.swap(vec2);
    cout << "Vector after swap with vec2: ";
    for (int elem : vec) {
        cout << elem << " ";
    }
    cout << endl;

    // Clearing the vector
    vec.clear();
    cout << "Vector after clear(): Size: " << vec.size() << ", Is empty: " << (vec.empty() ? "Yes" : "No") << endl;

    // Displaying vec2 to show the result of the swap
    cout << "Vector vec2 after swap: ";
    for (int elem : vec2) {
        cout << elem << " ";
    }
    cout << endl;

    return 0;
}
