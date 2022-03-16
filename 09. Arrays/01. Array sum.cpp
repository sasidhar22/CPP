// Array Sum

// Given an array of length N, you need to find and print the sum of all elements of the array.
// Input Format :
// Line 1 : An Integer N i.e. size of array
// Line 2 : N integers which are elements of the array, separated by spaces
// Output Format :
// Sum
// Constraints :
// 1 <= N <= 10 ^ 6
// Sample Input :
// 3
// 9 8 9
// Sample Output :
// 26



#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	int a[n];
	int sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		sum += a[i];
	}
	cout << sum;
	return 0;
}