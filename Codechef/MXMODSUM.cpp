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
		int n, m;
		cin >> n >> m;
		int arr[n];

		int ai = 0;

		for (int i = 0; i < n; i++) {
			cin >> arr[i];

			ai = max(ai, arr[i]);

		}

		int ans1 = 0, ans2 = 0;
		int finalans = 0;

		for (int i = 0; i < n; i++) {
			ans1 = ai + arr[i] + ((ai - arr[i]) % m);

			// For negative numbers we have to add m than again take modulus like ((-x)%m +m)%m

			ans2 = ai + arr[i] + ((arr[i] - ai) % m + m) % m;

			finalans = max(ans1, max(ans2, finalans));
		}

		cout << finalans << endl;
	}
}