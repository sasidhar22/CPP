// Reverse Word Wise

// Reverse the given string word wise. That is, the last word in given string should come at 1st place, last second word at 2nd place and so on. Individual words should remain as it is.
// Input format :
// String in a single line
// Output format :
// Word wise reversed string in a single line
// Constraints :
// 0 <= |S| <= 10^7
// where |S| represents the length of string, S.
// Sample Input 1:
// Welcome to Coding Ninjas
// Sample Output 1:
// Ninjas Coding to Welcome
// Sample Input 2:
// Always indent your code
// Sample Output 2:
// code your indent Always



void reverseStringWordWise(char input[]) {
	// Write your code here
	int l = 0;

	// finding the length of the string
	for (int i = 0; input[i] != '\0'; i++) {
		l++;
	}

	// reversing the complete string
	int i = 0, j = l - 1;
	while (i < j) {
		char temp = input[i];
		input[i] = input[j];
		input[j] = temp;
		i++;
		j--;
	}

	// traversing through the elements of string and reversing word wise
	int start = 0, end = 0;
	i = 0;
	for (; input[i] != '\0'; i++) {
		if (input[i] == ' ') {
			end = i - 1;

			//reversing the word
			while (start < end) {
				char temp = input[start];
				input[start] = input[end];
				input[end] = temp;
				start++;
				end--;
			}


			start = i + 1;
		}
	}

	// i reaches '\0'. So, reversing the last word left
	end = i - 1;
	while (start < end) {
		char temp = input[start];
		input[start] = input[end];
		input[end] = temp;
		start++;
		end--;
	}
}