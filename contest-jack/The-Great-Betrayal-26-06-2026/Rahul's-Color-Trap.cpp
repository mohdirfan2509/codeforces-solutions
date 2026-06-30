// Question Link: https://codeforces.com/group/zOa9U7TcXb/contest/700735/problem/A
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int test_cases;
    cin >> test_cases;
    for(int i=0;i<test_cases;i++){
       int n,m,k;
       cin >> n >> m >> k;
       cout << min(n,k)*min(m,k) << endl;
    }
}