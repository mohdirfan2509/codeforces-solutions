// Question Link: https://codeforces.com/problemset/problem/1840/C
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
    int test_cases;
    cin >> test_cases;
    for(long long i=0;i<test_cases;i++){
        long long n,k,q;
        cin >> n >> k >> q ;
        long long arr[n];
        for(long long j=0;j<n;j++){
            cin >> arr[j];
        } 
        long long days=0;
        long long ans=0;
        for(long long j=0;j<n;j++){
            if(arr[j]<=q){
                days++;
            }else{
                if(days>=k){
                    long long total=days;
                    while(days>=k){
                        ans=ans+total-days+1;
                        days--;
                    }
                }
                days=0;
            }             
        } 
        if(days>=k){
            long long total=days;
            while(days>=k){
                ans=ans+total-days+1;
                days--;
            }
        }
        cout << ans << endl;

    }

}