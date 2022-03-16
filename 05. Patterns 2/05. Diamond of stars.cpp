// Code : Diamond of stars

// Print the following pattern for the given number of rows.
// Note : N is always odd.


// Pattern for N = 5



// 	                The dots represent spaces.



//                 Input format :
// 	                N (Total no. of rows and can only be odd)
//                 Output format :
// 		                Pattern in N lines
//                 Constraints :
// 		                1 <= N <= 49
//                 Sample Input 1 :
// 		                5
//                 Sample Output 1 :
// 		                *
// 		                ***
// 		                *****
// 		                ***
// 		                *
//                 Sample Input 2 :
// 		                3
//                 Sample Output 2 :
// 		                *
// 		                ***
// 		                *



#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	int i = 1;
	while (i <= (n / 2 + 1)) {
		int j = i;
		while (j <= (n / 2)) {
			cout << " ";
			j++;
		}
		int k = 1;
		while (k <= 2 * i - 1) {
			cout << "*";
			k++;
		}
		cout << endl;
		i++;
	}
	i = 1;
	int t = n - 2;
	while (i <= n / 2) {
		int j = 1;
		while (j <= i) {
			cout << " ";
			j++;
		}
		int k = 1;
		while (k <= t) {
			cout << "*";
			k++;
		}
		cout << endl;
		i++;
		t -= 2;
	}
	return 0;
}