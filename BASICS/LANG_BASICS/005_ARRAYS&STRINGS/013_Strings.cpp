#include <bits/stdc++.h>
using namespace std; 

int main() 
{ 

	// String Declaration
	char str1[100] = "Alpha"; 
	char str2[100] = "Sigma"; 
    char str3[100] = "Alpha";

	// To get the length of the string 
	// use strlen() function 
	int x = strlen(str1); 

	cout << "Length of string " << str1 << " is " << x << endl; 

	cout << endl; 

	// To compare the two string str1 and str2 use strcmp() function 
	int result = strcmp(str1, str3); 

	// If result is 0 then str1 and str2 are equal
	if (result == 0) { 
		cout << "String " << str1 << " and String " << str2 << " are equal." << endl; 
	} 
	else { 
		cout << "String " << str1 << " and String " << str2 << " are not equal." << endl; 
	} 

	cout << endl; 

	cout << "String str1 before: " << str1 << endl; 

	// Use strcpy() to copy character from one string to another 
	strcpy(str1, str2); 

	cout << "String str1 after: " << str1 << endl; 

	return 0; 
} 
