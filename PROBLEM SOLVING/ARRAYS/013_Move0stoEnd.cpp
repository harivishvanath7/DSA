#include <bits/stdc++.h>
using namespace std;

void moveZeros(vector<int> &arr, int n) {
    int j = -1;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == 0){
            j=i;
            break;
        }
    }
        for (int i = j+1; i < n; i++)
        {
            if(arr[i] != 0){
                swap(arr[i], arr[j]);
                j++;
            }
        }
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Array before moving zeros: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    moveZeros(arr, n);

    cout << "Array after moving zeros: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}



/* BRUTE FORCE
    
    vector<int> temp;
    
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0){
            temp.push_back(arr[i]);
        }
    }

    for (int i = 0; i < temp.size(); i++)
    {
        arr[i] = temp[i];
    }

    for (int i = temp.size(); i < n; i++)
    {
        arr[i] = 0;
    }
    */