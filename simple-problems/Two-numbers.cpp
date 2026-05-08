// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/H
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long a,b;
    cin >> a >> b;
    cout << "floor " << a << " / " << b << " = " << a/b << endl;
    long long cl= (a%b==0) ? a/b : a/b+1;
    cout << "ceil " << a << " / " << b << " = " << cl << endl;
    long long rnd = (int)((a*1.0/b)+0.5);
    cout << "round " << a << " / " << b << " = " << rnd << endl;
   
  
}

