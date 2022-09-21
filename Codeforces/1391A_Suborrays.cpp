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
    int arr[101];
    for(int i=0;i<100;i++){
        arr[i] = i+1;
    }
    while (t--) {
     int n;
     cin>>n;
     for(int i=0;i<n;i++){
         cout<<arr[i]<<" ";
     }
     cout<<endl;
    }
}