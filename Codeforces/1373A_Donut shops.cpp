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
    ll t;
    cin>>t;
    while(t--){
        ll a,b,c;
        cin>>a>>b>>c;
        if(a<c) cout<<1<<" ";
        else cout<<-1<<" ";
        if(c<(a*b)) cout<<b<<" ";
        else cout<<-1;
        cout<<endl;
    }
}