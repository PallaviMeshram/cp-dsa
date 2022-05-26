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
	int cnt = 0;
	int n = s.length();
	for (int i = 0; i < n; i++) {
		if (s[i] == '4' or s[i] == '7') {
			cnt++;
		}
	}
	if (cnt == 4 or cnt == 7)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}