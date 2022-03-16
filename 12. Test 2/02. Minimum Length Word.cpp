// Minimum Length Word

// Given a string S (that can contain multiple words), you need to find the word which has minimum length.
// Note : If multiple words are of same length, then answer will be first minimum length word in the string.
// Words are seperated by single space only.
// Input Format :
// String S
// Output Format :
// Minimum length word
// Constraints :
// 1 <= Length of String S <= 10^5
// Sample Input 1 :
// this is test string
// Sample Output 1 :
// is
// Sample Input 2 :
// abc de ghihjk a uvw h j
// Sample Output 2 :
// a


/* input - Input String
*  output - Save the result in the output array (passed as argument). You don’t have to
*  print or return the result
*/
#include <climits>
void minLengthWord(char input[], char output[]) {
	// Write your code here
	int i = 0, j = 0;
	int min = INT_MAX;

	int start = 0;
	int end = 0;
	int count = 0;
	int k = 0;

	while (input[j] != '\0') {

		if (input[j] == ' ') {
			start = i;
			end = j - 1;
			count = 0;
			while (i < j) {
				count++;
				i++;
			}
			i = j + 1;
			if (min > count) {
				min = count;
				k = 0;
				while (start <= end) {
					output[k] = input[start];
					k++;
					start++;
				}
				output[k] = '\0';
			}
		}

		j++;
	}

	if (input[j] == '\0') {
		start = i;
		end = j - 1;
		count = 0;
		while (i < j) {
			count++;
			i++;
		}
		i = j + 1;
		if (min > count) {
			min = count;
			k = 0;
			while (start <= end) {
				output[k] = input[start];
				k++;
				start++;
			}
			output[k] = '\0';
		}
	}
}


