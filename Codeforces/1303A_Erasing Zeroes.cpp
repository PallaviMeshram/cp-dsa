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
		string s;
		cin >> s;
		bool check = false;
		int n = s.length();
		int cnt = 0;
		while (s[n - 1] == '0') {
			n--;
			s.pop_back();
		}

		for (int i = 0; i < n - 1; i++) {
			if (s[i] == '1' and s[i + 1] == '0' ) {
				check = true;
			} else if (s[i] == '0' and check == true) {
				cnt++;
			}
			else if (s[i] == '1' and check == true) {
				check = false;
			}
		}
		cout << cnt << endl;
	}
}