//write a program that checks if the user inputs a sentence that is a palindrome (same backwards as it is forwards)

#include <iostream>
#include <string>

using namespace std;

int main() {

	string input;

	int i = 0; //pointer that goes from left to the right
	int j = 0; //pointer that goes from right to the left 
	bool isPalindrome = true;
	
	getline(cin, input); 
	j = input.length() - 1;  // returns the size of the string. "bob" is a length of 3 

	while ((i < j) && isPalindrome) {
		isPalindrome = (input[i] == input[j]);
		i++; j--; // i and j will move towards the middle
	}
	
	if (isPalindrome) {
		cout << "Yes" << endl; 
	}
	else { cout << "No" << endl; }


	return 0; 
}