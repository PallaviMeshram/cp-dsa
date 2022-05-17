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
	int n, m;
	cin >> n >> m;

	vector<vector<char>> v(n, vector<char> (m));


	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {

			if (i % 2 == 0) v[i][j] = '#';
			else if (i % 4 == 1 and j == (m - 1)) {
				v[i][j] = '#';
			} else if (i % 4 == 3 and j == 0) {
				v[i][j] = '#';
			}
			else {
				v[i][j] = '.';
			}
		}

	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << v[i][j];
		}
		cout << endl;
	}
}