// Question Link: https://codeforces.com/problemset/problem/1876/A
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int test_cases;
    cin >> test_cases;
    for(int i=0;i<test_cases;i++){
       int n,p;
       cin >> n >> p;
       vector<pair<long long,long long>> v(n);
       vector<long long > a(n),b(n);
       for(int j=0;j<n;j++){
        cin >> a[j];
       }
       for(int j=0;j<n;j++){
        cin >> b[j];
       }
       for(int j=0;j<n;j++){
        v[j]={b[j],a[j]};
       }
       sort(v.begin(),v.end());
       long long minCost=p;
       long long alreadyShared=1;
       for(auto it : v){
        long long canBeShared=it.second;
        long long sharingCost=it.first;

        if(sharingCost >=p){
            break;
        }
        if(alreadyShared+canBeShared >n){
            minCost+=(n-alreadyShared)*sharingCost;
            alreadyShared=n;
            break;
        }else{
            minCost+=canBeShared*sharingCost;
            alreadyShared+=canBeShared;
        }
       }
       minCost+=(n-alreadyShared)*p;
       cout << minCost << endl;

    }

}