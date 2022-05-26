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
	int n, k;
	cin >> n >> k;
	int cnt = 0;
	while (k--) {
		if (n % 10 != 0) {
			n--;
		}
		else {
			n = n / 10;
		}
	}
	cout << n << endl;
}