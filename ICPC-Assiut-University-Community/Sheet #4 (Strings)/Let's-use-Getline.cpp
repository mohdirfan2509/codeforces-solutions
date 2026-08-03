// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/B
#include <bits/stdc++.h>

#include <iostream>

using namespace std;

int main() {
   string s;
   getline(cin,s);
   for(int i=0;i<s.size();i++){
    if(s[i]=='\\'){
        break;
    }else{
        cout << s[i];
    }
   }
}