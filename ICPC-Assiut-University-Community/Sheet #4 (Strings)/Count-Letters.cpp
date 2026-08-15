// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/E
#include <bits/stdc++.h>

#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;
    int n=s.size();
   map<char,int> um;
   for(char x:s){
    um[x]++;
   }
  for(auto [key,value] : um){
    cout << key << " " << ":" << " " << value << endl;
  }
  
}