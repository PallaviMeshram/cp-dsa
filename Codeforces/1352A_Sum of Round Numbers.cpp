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
		int temp;
		cin >> temp;
		vector<int> v;
		int cnt = 1;
		while (temp > 0) {

			if (temp % 10 != 0)
			{

				int x = (temp % 10) * cnt;
				v.push_back(x);

			}
			temp = temp / 10;
			cnt = cnt * 10;
		}
		int vs = v.size();
		cout << vs << endl;
		for (int i = 0; i < vs; i++) {
			cout << v[i] << " ";
		}
		cout << endl;
	}
}