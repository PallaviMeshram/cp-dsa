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
	string ns;
	bool flag = false;
	for (int i = 0; i < 5; i++) {
		cin >> ns;
		if (ns[0] == s[0] or ns[1] == s[1]) {
			flag = true;
			break;
		}
	}
	if (flag) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
}