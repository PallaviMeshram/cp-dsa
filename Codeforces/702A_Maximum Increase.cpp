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
	int n;
	cin >> n;
	ll a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int cnt = 1;
	int ans = 1;
	for (int i = 0; i < n - 1; i++) {
		if (a[i + 1] > a[i]) {
			cnt++;
			ans = max(ans, cnt);
		} else {
			cnt = 1;
		}
	}
	cout << ans << endl;
}