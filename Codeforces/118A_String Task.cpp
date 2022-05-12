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
	string news = "";
	for (int i = 0; i < s.length(); i++) {
		s[i] = tolower(s[i]);
		if (s[i] != 'A' and s[i] != 'a' and s[i] != 'E' and s[i] != 'e' and s[i] != 'I' and s[i] != 'i' and
		        s[i] != 'o' and s[i] != 'O' and s[i] != 'u' and s[i] != 'U' and s[i] != 'y') {
			news += ".";
			news += s[i];
		}
	}
	cout << news << endl;
}