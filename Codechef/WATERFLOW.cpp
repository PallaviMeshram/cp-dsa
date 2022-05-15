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
		int x, y, z, w;
		cin >> w >> x >> y >> z;
		int init = x - w;
		int final = y * z;

		if (init == final) {
			cout << "filled" << endl;
		} else if (init < final) {
			cout << "overflow" << endl;
		} else {
			cout << "unfilled" << endl;
		}
	}
}