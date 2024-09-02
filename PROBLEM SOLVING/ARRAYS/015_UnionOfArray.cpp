#include <bits/stdc++.h>
using namespace std;

void unionOfArr(vector<int>& arr1, vector<int>& arr2) {
    int i = 0, j = 0;
    vector<int> unionArr;
    
    while (i < arr1.size() && j < arr2.size()) {
        if (arr1[i] <= arr2[j]) {
            if (unionArr.empty() || unionArr.back() != arr1[i]) {
                unionArr.push_back(arr1[i]);
            }
            i++;
        } else {
            if (unionArr.empty() || unionArr.back() != arr2[j]) {
                unionArr.push_back(arr2[j]);
            }
            j++;
        }
    }
    
    while (i < arr1.size()) {
        if (unionArr.empty() || unionArr.back() != arr1[i]) {
            unionArr.push_back(arr1[i]);
        }
        i++;
    }
    
    while (j < arr2.size()) {
        if (unionArr.empty() || unionArr.back() != arr2[j]) {
            unionArr.push_back(arr2[j]);
        }
        j++;
    }
    
    cout << "Union of Two Arrays: ";
    for (int num : unionArr) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    int n1, n2;
    cout << "Enter the size of 1st Array: ";
    cin >> n1;
    cout << "Enter the size of 2nd Array: ";
    cin >> n2;

    vector<int> arr1(n1), arr2(n2);

    cout << "Enter elements for 1st Array: ";
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }

    cout << "Enter elements for 2nd Array: ";
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    cout << "1st Array: ";
    for (int num : arr1) {
        cout << num << " ";
    }
    cout << endl;

    cout << "2nd Array: ";
    for (int num : arr2) {
        cout << num << " ";
    }
    cout << endl;

    unionOfArr(arr1, arr2);

    return 0;
}

/*
BRUTE FORCE :

    set<int> st;

    for (int i = 0; i < n1; i++) {
        st.insert(arr1[i]);
    }

    for (int i = 0; i < n2; i++) {
        st.insert(arr2[i]);
    }

    int unionArr[st.size()];
    int i = 0; 

    for (auto it : st) {
        unionArr[i++] = it;
    }

    cout << "Union of Two Arrays: ";
    for (int i = 0; i < st.size(); i++) {
        cout << unionArr[i] << " ";
    }
    cout << endl;
*/