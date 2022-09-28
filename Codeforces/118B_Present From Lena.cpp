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
    int n;
    cin>>n;
    for(int row=-n; row<=n; row++){
        int spaces = 2*abs(row);
        for(int i=0;i<spaces;i++) cout<<" ";
        int max = n-abs(row);
        for(int i=0;i<max;i++) cout<<i<<" ";
        for(int i=max;i>0;i--) cout<<i<<" ";
        cout<<0<<endl;
    }
}