#include <bits/stdc++.h>
using namespace std;

void movingZerosToEnd(int arr[], int n){
    int j = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
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

int main(){

    int n;
    cout << "Enter the no. of Array Elements : ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Before Moving Zeros : \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";

    movingZerosToEnd(arr, n);

    cout << "After Moving Zeros : \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";

    return 0;
}