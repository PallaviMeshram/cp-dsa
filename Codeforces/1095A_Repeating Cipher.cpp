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
	string s;
	cin >> s;
	string ns = "";
	int cnt = 1;
	for (int i = 0; i < n; i++) {
		ns += s[i];
		i = cnt + i;
		cnt++;
	}
	cout << ns << endl;
}