// Code : Inverted Number Pattern

// Print the following pattern for the given N number of rows.
// Pattern for N = 4
// 	                4444
// 	                333
// 	                22
// 	                1
//                 Input format :
// 	                Integer N (Total no. of rows)
//                 Output format :
// 		                Pattern in N lines
//                 Constraints :
// 		                0 <= N <= 50
//                 Sample Input 1 :
// 		                5
//                 Sample Output 1 :
// 		                55555
// 		                4444
// 		                333
// 		                22
// 		                1
//                 Sample Input 2 :
// 		                6
//                 Sample Output 2 :
// 		                666666
// 		                55555
// 		                4444
// 		                333
// 		                22
// 		                1



#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	int i = n;
	while (i >= 1) {
		int j = i;
		while (j >= 1) {
			cout << i;
			j--;
		}
		cout << endl;
		i--;
	}
	return 0;
}