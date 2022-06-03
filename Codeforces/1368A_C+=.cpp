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
		int a, b, n;
		cin >> a >> b >> n;
		if (a > n or b > n) {
			cout << 0 << endl;
		}
		else if (a + b > n) {
			cout << 1 << endl;
		}
		else {
			int sum = 0, cnt = 0;

			while (sum <= n) {
				if (a > b) {
					b += a;
					cnt++;
					sum = b;
				}
				else {
					a += b;
					cnt++;
					sum = a;
				}
			}
			cout << cnt << endl;
		}
	}
}