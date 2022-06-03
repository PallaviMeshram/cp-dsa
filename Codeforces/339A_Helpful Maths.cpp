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
	string s;
	cin >> s;
	int n = s.length();
	vector<char> v;
	for (int i = 0; i < n; i++) {
		if (i % 2 == 0) {
			v.push_back(s[i]);
		}
	}

	sort(v.begin(), v.end());
	string ans = "";

	int x = v.size();

	for (int i = 0; i < x; i++) {
		if (i == (x - 1)) {
			ans += v[i];
		}
		else {
			ans += v[i];
			ans += "+";
		}
	}
	cout << ans << endl;
}
