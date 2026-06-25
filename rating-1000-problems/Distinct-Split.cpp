// Question Link: https://codeforces.com/contest/1791/problem/D
#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int main() {
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++) {
       int n;
       cin >> n;
       string s;
       cin >> s;
       unordered_set<char> uset;
       int pref[n];
       for(int j=0;j<n;j++){
          uset.insert(s[j]);
          pref[j]=uset.size();
       }
       uset.clear();
       int suff[n];
       for(int j=n-1;j>=0;j--){
          uset.insert(s[j]);
          suff[j]=uset.size();
       }
       int ans=0;
       for(int j=0;j<n-1;j++){
          ans=max(ans,pref[j]+suff[j+1]);
       }
       cout << min(ans,n) << endl;
    }
}