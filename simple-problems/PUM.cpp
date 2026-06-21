// Question Link:https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/V
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  int a=1;
  for(int i=1;i<=n;i++){
      for(int j=1;j<=3;j++){
        
        cout << a << " ";
        a++;
      }
      cout << "PUM" << endl;
      a++;
    
  }
}

