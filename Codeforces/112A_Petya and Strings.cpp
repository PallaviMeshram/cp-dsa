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
	string s1, s2;
	cin >> s1 >> s2;
	bool flag = true;

	int n = s1.length();
	for (int i = 0; i < n; i++) {
		s1[i] = tolower(s1[i]);
		s2[i] = tolower(s2[i]);
		if (s1[i] < s2[i]) {
			cout << -1 << endl;
			flag = false;
			break;
		}
		else if (s1[i] > s2[i]) {
			cout << 1 << endl;
			flag = false;
			break;
		}
	}
	if (flag) {
		cout << 0 << endl;
	}
}