#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    // Input array elements
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    unordered_map<int, int> hash;

    // Count the frequency of each element
    for (int i = 0; i < n; i++) {
        hash[arr[i]]++;
    }

    // Variables to track max and min frequencies
    int max_freq = INT_MIN;
    int min_freq = INT_MAX;

    // Vectors to store elements with max and min frequencies
    vector<int> max_freq_elems;
    vector<int> min_freq_elems;

    // Iterate over the map to find the elements with max and min frequency
    for (auto &pair : hash) {
        int elem = pair.first;
        int freq = pair.second;

        // Handle max frequency
        if (freq > max_freq) {
            max_freq = freq;
            max_freq_elems = {elem}; // Reset and add the current element
        } else if (freq == max_freq) {
            max_freq_elems.push_back(elem); // Add to the list
        }

        // Handle min frequency
        if (freq < min_freq) {
            min_freq = freq;
            min_freq_elems = {elem}; // Reset and add the current element
        } else if (freq == min_freq) {
            min_freq_elems.push_back(elem); // Add to the list
        }
    }

    // Output the results
    cout << "Elements with max frequency (" << max_freq << "): ";
    for (int elem : max_freq_elems) {
        cout << elem << " ";
    }
    cout << endl;

    cout << "Elements with min frequency (" << min_freq << "): ";
    for (int elem : min_freq_elems) {
        cout << elem << " ";
    }
    cout << endl;

    return 0;
}
