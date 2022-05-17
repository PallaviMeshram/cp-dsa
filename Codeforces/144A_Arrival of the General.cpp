#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<vector>
#include<stack>
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
	int cnt = 0;
	int a[n];

	for (int i = 0; i < n; i++) cin >> a[i];

	int maxx = 0, minn = 1000, mxi, mni;
	for (int i = 0; i < n; i++) {
		if (maxx < a[i]) {
			maxx = a[i];
			mxi = i;
		}
		if (minn >= a[i]) {
			minn = a[i];
			mni = i;
		}

	}
	if (mni < mxi) cnt = (mxi - 1) + (n - mni) - 1;
	else cnt = (mxi - 1) + (n - mni);
	cout << cnt << endl;
}