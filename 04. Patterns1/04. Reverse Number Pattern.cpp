// Code : Reverse Number Pattern

// Print the following pattern for the given N number of rows.
// Pattern for N = 4
//
// 	                1
// 	                21
// 	                321
// 	                4321
//                 Input format :
// 	                Integer N (Total no. of rows)
//                 Output format :
// 		                Pattern in N lines
// 		                Constraints
// 		                0 <= N <= 50
//                 Sample Input 1 :
// 		                5
//                 Sample Output 1 :
// 		                1
// 		                21
// 		                321
// 		                4321
// 		                54321
//                 Sample Input 2 :
// 		                6
//                 Sample Output 2 :
// 		                1
// 		                21
// 		                321
// 		                4321
// 		                54321
// 		                654321


#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	int i = 1;
	while (i <= n) {
		int j = i;
		while (j >= 1) {
			cout << j;
			j--;
		}
		cout << endl;
		i++;
	}
	return 0;
}