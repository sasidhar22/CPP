// Pyramid Number Pattern

// Print the following pattern for the given number of rows.
// Pattern for N = 4
//    1
//   212
//  32123
// 4321234
// Input format : N (Total no. of rows)

// Output format : Pattern in N lines

// Sample Input :
// 5
// Sample Output :
//     1
//    212
//   32123
//  4321234
// 543212345



#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	int i = 1;
	while (i <= n) {
		int t = 1;
		while (t <= n - i) {
			cout << " ";
			t++;
		}
		int j = i;
		int k = 1;
		while (k <= i) {
			cout << j;
			j--;
			k++;
		}
		j += 2;
		while (j <= i) {
			cout << j;
			j++;
		}
		cout << endl;
		i++;
	}
	return 0;
}