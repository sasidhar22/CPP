// Number Pattern 2

// Print the following pattern
// Pattern for N = 4

// . . . 1
// . . 2 3
// . 3 4 5
// 4 5 6 7

// The dots represent spaces.

// Input Format :
// N (Total no. of rows)
// Output Format :
// Pattern in N lines
// Sample Input :
// 5
// Sample Output :
// . . . . 1
// . . . 2 3
// . . 3 4 5
// . 4 5 6 7
// 5 6 7 8 8

// The dots represent spaces.

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int t = 1;
		for (int k = n; k - i > 0; k--) {
			cout << " ";
		}
		for (int j = i; t <= i; t++, j++) {
			cout << j;
		}
		cout << endl;
	}
	return 0;
}