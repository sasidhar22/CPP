// Trim Spaces

// Given an input string S that contains multiple words, you need to remove all the spaces present in the input string.
// There can be multiple spaces present after any word.
// Input Format :
// String S
// Output Format :
// Updated string
// Constraints :
// 1 <= Length of string S <= 10 ^ 6
// Sample Input :
// abc def g hi
// Sample Output :
// abcdefghi



#include <cstring>
int len(char input[]) {
	int l = 0;
	for (int i = 0; input[i] != '\0'; i++) {
		l++;
	}
	return l;
}

void trimSpaces(char input[]) {
	// Write your code here
	int k = 0;
	for (int i = 0; input[i] != '\0'; i++) {
		if (input[i] != ' ') {
			input[k] = input[i];
			k++;
		}
	}
	input[k] = '\0';
}