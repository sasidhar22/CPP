// Number Star Pattern

// Print the following pattern for given number of rows.
// Input format :

// Line 1 : N (Total number of rows)

// Sample Input :
//    5
// Sample Output :
// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1



#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	int m = n;
	int i = 1;
	while (i <= n) {
		int j = 1;
		while (j <= (n - i) + 1) {
			cout << j++;
		}
		while (j <= n) {
			cout << '*';
			j++;
		}

		int k = 1;
		while (k <= i - 1) {
			cout << '*';
			k++;
		}
		k = m;
		while (k >= 1) {
			cout << k--;
		}
		cout << endl;
		i++;
		m--;
	}
	return 0;
}