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
	bool flag = false;
	while (t--) {
		int x;
		cin >> x;

		if (x == 1) {
			flag = true;
		}
	}
	if (flag) cout << "Hard" << endl;
	else cout << "Easy" << endl;
}