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
	int t, k;
	cin >> t;
	int arr[t + 1];
	for (int i = 1; i <= t; i++) {
		cin >> k;
		arr[k] = i;
	}
	for (int i = 1; i <= t; i++) {
		cout << arr[i] << " ";
	}
}