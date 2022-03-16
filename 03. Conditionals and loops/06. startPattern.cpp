// Start Pattern

// Print the following pattern
// Pattern for N = 4

// ...*
// ..***
// .*****
// *******


// The dots represent spaces.



// Input Format :
// N (Total no. of rows)
// Output Format :
// Pattern in N lines
// Constraints :
// 0 <= N <= 50
// Sample Input 1 :
// 3
// Sample Output 1 :
//    *
//   ***
//  *****
// Sample Input 2 :
// 4
// Sample Output 2 :
//     *
//    ***
//   *****
//  *******



#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vll;
typedef pair<int, int> pii;
typedef pair<long, long> pll;
typedef vector<pii> vpii;
#define rep(i,x,y) for(int i=x;i<y;i++)
#define F first
#define S second
#define pb push_back
#define eb emplace_back
#define PRES(c,x) ((c).find(x)!=(c).end())

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n - i; j++) {
			cout << " ";
		}
		int t = 1;
		for (int k = i; t <= 2 * k - 1; t++) {
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}