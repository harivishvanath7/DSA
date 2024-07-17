// 1. std::set is an Associative Container that contains a sorted set of unique objects of type Key.
// 2. It is usually implemented using Red-Black Tree.
// 3. Insertion, Removal, Search have logarithmic complexity.
// 4. If we want to store user defined data type in set then we will have to provide 
//    compare function so that set can store them in sorted order.
// 5. We can pass the order of sorting while constructing set object.


#include <iostream>
#include <set>
#include <algorithm> // For std::for_each

using namespace std;

int main() {
    // Creating a set of integers
    set<int> mySet = {5, 2, 9, 1, 6};

    // Displaying the elements of the set
    cout << "Set elements: ";
    for (int elem : mySet) {
        cout << elem << " ";
    }
    cout << endl;

    // ELEMENT ACCESS (set does not support direct access by index)
    // Accessing elements using iterator
    auto it = mySet.find(2);
    if (it != mySet.end()) {
        cout << "Element 2 found: " << *it << endl;
    } else {
        cout << "Element 2 not found" << endl;
    }

    // Checking if an element exists using count()
    cout << "Is element 6 in the set? " << (mySet.count(6) ? "Yes" : "No") << endl;

    // MODIFIERS
    // Inserting an element using insert()
    mySet.insert(10);
    cout << "Set after insert(10): ";
    for (int elem : mySet) {
        cout << elem << " ";
    }
    cout << endl;

    // Inserting an element using emplace()
    mySet.emplace(12);
    cout << "Set after emplace(12): ";
    for (int elem : mySet) {
        cout << elem << " ";
    }
    cout << endl;

    // Erasing an element using erase() by value
    mySet.erase(2);
    cout << "Set after erase(2): ";
    for (int elem : mySet) {
        cout << elem << " ";
    }
    cout << endl;

    // Erasing an element using erase() by iterator
    it = mySet.find(9);
    if (it != mySet.end()) {
        mySet.erase(it);
    }
    cout << "Set after erase(element 9): ";
    for (int elem : mySet) {
        cout << elem << " ";
    }
    cout << endl;

    // Clearing the set
    mySet.clear();
    cout << "Set after clear(): Size: " << mySet.size() << ", Is empty: " << (mySet.empty() ? "Yes" : "No") << endl;

    // Creating a new set for further operations
    mySet = {7, 3, 8, 1, 5};

    // Capacity functions
    cout << "Set size: " << mySet.size() << endl;
    cout << "Is set empty? " << (mySet.empty() ? "Yes" : "No") << endl;

    // Swap contents with another set
    set<int> anotherSet = {100, 200, 300};
    mySet.swap(anotherSet);
    cout << "Set after swap with anotherSet: ";
    for (int elem : mySet) {
        cout << elem << " ";
    }
    cout << endl;

    // Displaying anotherSet to show the result of the swap
    cout << "AnotherSet after swap: ";
    for (int elem : anotherSet) {
        cout << elem << " ";
    }
    cout << endl;

    // Using emplace_hint for more efficient insertion
    anotherSet.emplace_hint(anotherSet.begin(), 250);
    cout << "AnotherSet after emplace_hint(250): ";
    for (int elem : anotherSet) {
        cout << elem << " ";
    }
    cout << endl;

    // Finding the lower and upper bounds
    auto lower = anotherSet.lower_bound(100);
    auto upper = anotherSet.upper_bound(200);
    cout << "Lower bound of 100: " << *lower << endl;
    cout << "Upper bound of 200: " << *upper << endl;

    // Using equal_range to get the range of a specific key
    auto range = anotherSet.equal_range(200);
    cout << "Range of 200: ";
    for (auto it = range.first; it != range.second; ++it) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
