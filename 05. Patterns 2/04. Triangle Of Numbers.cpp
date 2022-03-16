// Code : Triangle of Numbers

// Print the following pattern for the given number of rows.
// Pattern for N = 4



// 	                The dots represent spaces.



//                 Input format :
// 	                Integer N (Total no. of rows)
//                 Output format :
// 		                Pattern in N lines
//                 Constraints :
// 		                0 <= N <= 50
//                 Sample Input 1 :
// 		                5
//                 Sample Output 1 :
// 		                1
// 		                232
// 		                34543
// 		                4567654
// 		                567898765
//                 Sample Input 2 :
// 		                4
//                 Sample Output 2 :
// 		                1
// 		                232
// 		                34543
//



#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	int i = 1;
	while (i <= n) {
		int k = 1;
		while (k <= n - i) {
			cout << " ";
			k++;
		}
		int j = i;
		int t = 1;
		while (t <= i) {
			cout << j;
			j++;
			t++;
		}
		j--;
		t = 1;
		while (t <= i - 1) {
			j--;
			cout << j;
			t++;
		}
		cout << endl;
		i++;
	}
	return 0;
}