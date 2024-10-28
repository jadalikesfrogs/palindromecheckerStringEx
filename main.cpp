//write a program that checks if the user inputs a sentence that is a palindrome (same backwards as it is forwards)

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

//returns true if the current char should be skipped
bool isSkipChar(char c);

int main() {

	string input;

	int i = 0; //pointer that goes from left to the right
	int j = 0; //pointer that goes from right to the left 
	bool isPalindrome = true;
	
	getline(cin, input); 
	j = input.length() - 1;  // returns the size of the string. "bob" is a length of 3 

	while ((i < j) && isPalindrome) {
		
		if (isSkipChar(input[i])) { i++; }// checks for a space and if there is one it skips it.

		else if (isSkipChar(input[j]) ){ j--; }//checks for a space

		else { 
			isPalindrome = (toupper(input[i++]) == toupper(input[j--])); // i and j will move towards the middle and check 2 chars
		
		} 
		
	}
	
	if (isPalindrome) {
		cout << "Yes" << endl; 
	}
	else { cout << "No" << endl; }


	return 0; 
}

bool isSkipChar(char c)
{

	return (ispunct(c) || isspace(c) || iscntrl(c));
	
}
