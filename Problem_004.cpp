-- Problem Link: https://codeforces.com/problemset/problem/1352/B

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		int odd = n - (k - 1);
		if (odd > 0 && odd % 2 == 1) {
			cout << "YES" << endl;
			for (int i = 0; i < k - 1; ++i) cout << "1 ";
			cout << odd << endl;
			continue;
		}
		int even = n - 2 * (k - 1);
		if (even > 0 && even % 2 == 0) {
			cout << "YES" << endl;
			for (int i = 0; i < k - 1; ++i) cout << "2 ";
			cout << even << endl;
			continue;
		}
		cout << "NO" << endl;
	}
}
