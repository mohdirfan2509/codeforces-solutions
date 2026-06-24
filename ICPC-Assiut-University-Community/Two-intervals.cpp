// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/X
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long l1,r1,l2,r2;
    cin >> l1 >> r1 >> l2 >> r2;
    if((l2 > r1 &&  r2 > l1) || (l2 < r1 &&  r2 < l1)){
        cout << -1 << endl;
    }else{
        cout << max(l1,l2) << " " << min(r1,r2) << endl;
    }
   
  
}

