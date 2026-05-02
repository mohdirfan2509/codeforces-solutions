// Question Link: https://codeforces.com/problemset/problem/1883/C
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int test_cases;
    cin >> test_cases;
    for(int i=0;i<test_cases;i++){
        int n,k;
        cin >> n >> k;
        int arr[n];
        for(int j=0;j<n;j++){
            cin >> arr[j];
        }
        bool flag=true;
        int ans=INT_MAX;
        int evens=0;
        for(int j=0;j<n;j++){
            if(arr[j]%k==0){
                flag=false;
                cout << 0 << endl;
                break;
            }
            ans=min(ans,k-arr[j]%k);
            if(k==4){
                if(arr[j]%2==0){
                    evens++;
                }
                ans=min(ans,abs(2-evens));
            }
        }
        if(flag){
            cout << ans << endl;
        }
    }

}