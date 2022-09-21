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

    fio;
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin>>n>>m;
        char arr[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>arr[i][j];
            }
        }
        int cnt = 0;
        for(int i=0;i<n-1;i++){
            if(arr[i][m-1] == 'R') cnt++;
        }
        for(int i=0;i<m-1;i++){
            if(arr[n-1][i] == 'D') cnt++;
        }
        cout<<cnt<<endl;
    }
}