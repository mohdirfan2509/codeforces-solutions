// Question Link : https://codeforces.com/problemset/problem/1850/D

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int test_cases;
    cin >> test_cases;
    for(int i=0;i<test_cases;i++){
        int n,k;
        cin >> n >> k;
        vector<int> arr;
        int x;
        for(int j=0;j<n;j++){
            cin >> x;
            arr.push_back(x);
        }
        sort(arr.begin(),arr.end());
        int curr=1;
        int maxLen=1;
        for(int j=0;j<n-1;j++){
            if(abs(arr[j]-arr[j+1])<=k){
                curr++;
            }else{
                curr=1;
            }
            maxLen=max(maxLen,curr);
        }
        cout << n-maxLen << "\n";
    }
}