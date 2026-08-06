// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/E
#include <bits/stdc++.h>

#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;
    int sum=0;
    for(int i=0;i<s.size();i++){
        sum=sum+(s[i]-'0');
    }
    cout << sum << endl;
  
}