// Question Link : https://codeforces.com/problemset/problem/1475/A

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int test_cases;
    cin >> test_cases;
    for(int i=0;i<test_cases;i++){
       long long n;
       cin >> n;
       while(n%2==0) n=n/2;
       if(n>1) cout << "YES" << endl;
       else cout << "NO" << endl;
    }
}