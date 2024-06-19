#include <bits/stdc++.h>
using namespace std;

int main(){

    int mark;
    char grade;

    cout << "Enter Your Mark : ";
    cin >> mark;

    if(mark <= 100)
    {
        if(mark < 25){
            grade = 'F';
        }
        else if(mark <= 40){
            grade = 'E';
        }
        else if(mark <= 60){
            grade = 'D';
        }
        else if(mark <= 75){
            grade = 'C';
        }
        else if(mark <= 90){
            grade = 'B';
        }
        else{
            grade = 'A';
        }

        cout << "The grade for the Mark " << mark << " is " << grade;
    }
    else{
        cout << "Invalid Input" << endl;
    }

    return 0;
}