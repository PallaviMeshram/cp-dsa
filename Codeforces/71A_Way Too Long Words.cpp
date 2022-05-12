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
	string s;
#endif

	fio;
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		int len = s.length();
		string ans = "";
		if (len > 10) {
			ans += s[0];
			len -= 2;
			string temp = to_string(len);
			ans += temp;
			ans += s[s.length() - 1];

			cout << ans << endl;
		}
		else {
			cout << s << endl;
		}

	}
}