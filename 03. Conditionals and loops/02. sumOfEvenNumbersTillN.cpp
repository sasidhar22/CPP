// Sum of Even Numbers till N

// Given a number N, print sum of all even numbers from 1 to N.
// Input Format :
// Integer N
// Output Format :
// Required Sum
// Sample Input 1 :
//  6
// Sample Output 1 :
// 12

#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	bool even = n % 2 != 0 ? false : true;
	if (!even)n--;
	int sum = 0;
	while (n >= 2) {
		sum += n;
		n -= 2;
	}
	cout << sum;
}