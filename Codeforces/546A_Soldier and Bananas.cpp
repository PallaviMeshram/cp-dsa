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
	int k, n, w;
	cin >> k >> n >> w;
	int tot = 0;

	for (int i = 1; i <= w; i++) {
		tot += i * k;
	}

	if (tot > n) {
		cout << tot - n << endl;
	}
	else {
		cout << 0 << endl;
	}
}