#include <bits/stdc++.h>
using namespace std;

void intersectionOfArr(vector<int>& arr1, vector<int>& arr2) {
   int r = arr1.size();
   int s = arr2.size();
   
   int i=0; 
   int j=0;

   vector<int> interArr;
   while (i<r && j<s)
   {
    if (arr1[i] < arr2[j]){
        i++;
    }
   
    if (arr2[j] < arr1[i]){
        j++;
    }
    else{
        interArr.push_back(arr1[i]);
        i++;
        j++;
    }
    
   }
   
    cout << "Intersection of Two Arrays: ";
    for (int num : interArr) {
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

    intersectionOfArr(arr1, arr2);

    return 0;
}

/*
 BRUTE FORCE:
 
 int r = arr1.size();
    int s = arr2.size();
    vector<int> interArr;

    int vis[s] = {0};
    
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < s; j++)
        {
            if (arr1[i] == arr2[j] && vis[j] == 0)
            {
                interArr.push_back(arr1[i]);
                vis[j] = 1;
                break;
            }
            if (arr2[j] > arr1[i]) break;
        }
    }

*/