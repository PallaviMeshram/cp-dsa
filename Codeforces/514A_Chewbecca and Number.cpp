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

	for (int i = 0; i < s.length(); i++) {
		if (i == 0 and s[i] == '9') {
			continue;
		}
		else if (s[i] == '5' or s[i] == '6' or s[i] == '7' or s[i] == '8' or s[i] == '9') {
			int z = '9' - s[i];
			s[i] = char(z + '0');
		}
	}

	cout << s << endl;


}