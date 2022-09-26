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
    int n,m;
    cin>>n>>m;
    int cnt = -1;
    
    if(m%n == 0){
        cnt = 0;
        int rem = m/n;
        while(rem%2 == 0){
            cnt++;
            rem = rem/2;
        }
        while(rem%3 == 0){
            cnt++;
            rem = rem/3;
        }
        
        if(rem != 1) cnt = -1;
    }
    
    cout<<cnt<<endl;
    return 0;
}