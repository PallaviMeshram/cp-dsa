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
       int n;
       cin>>n;
       cout<<2<<endl;
       int a = n, b = n-1;
       for(int i=1;i<n;i++){
           cout<<a<<" "<<b<<endl;
           a = (a+b+1)/2;
           b--;
       }
    }
}