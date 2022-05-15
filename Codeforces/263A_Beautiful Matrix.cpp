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
	vector<vector<int>> v(5, vector<int> (5));
	int x = 0, y = 0;

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cin >> v[i][j];
			if (v[i][j] == 1) {
				x = i + 1;
				y = j + 1;
			}
		}
	}

	int ans = abs(3 - x) + abs(3 - y);
	cout << ans << endl;
}