// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/G
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int test_cases;
    cin >> test_cases;
    for(int i=0;i<test_cases;i++){
        int n;
        cin >> n;
        long long ans=1;
        for(int j=1;j<=n;j++){
            ans=ans*j;
        }
        cout << ans << endl;
    }
}