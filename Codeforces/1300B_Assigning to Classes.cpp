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
        int n;
        cin >> n;
        int m = 2 * n;
        int arr[m];
        for (int i = 0; i < m; i++) {
            cin >> arr[i];
        }
        sort(arr, arr + m);
        int ans = abs(arr[n] - arr[n - 1]);
        cout << ans << endl;
    }
}