// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/S
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
    int test_cases;
    cin >> test_cases;
    for(int i=0;i<test_cases;i++){
        long long x,y;
        cin >> x >> y ;
        long long small=min(x,y);
        long long big=max(x,y);
        long long ans=0;
        for(long long j=small+1;j<=big-1;j++){
            if(j%2==1){
                ans+=j;
            }

        }
        cout << ans << endl;
    }

}