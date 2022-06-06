#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<vector>
#include<stack>
#include<cmath>
#include<map>
#include<set>
#define fio ios::sync_with_stdio(0);cin.tie(0);
#define ll long long int
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	fio;
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int c = 0;
		int digit = n % 10;
		while (n > 0) {
			c++;
			n = n / 10;
		}
		int ans;
		if (c == 1) {
			ans = 10 * (digit - 1) + 1;
		}
		else if (c == 2) {
			ans = 10 * (digit - 1) + 3;
		}
		else if (c == 3) {
			ans = 10 * (digit - 1) + 6;
		}
		else {
			ans = 10 * (digit - 1) + 10;
		}
		cout << ans << endl;

	}
}