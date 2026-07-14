// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/L
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int test_cases;
    cin >> test_cases;
    for(int i=0;i<test_cases;i++){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int j=0;j<n;j++){
            cin >> arr[j];
        }
        for(int j=0;j<n;j++){
            for(int k=j;k<n;k++){
                int maxElement=arr[j];
                for(int l=j;l<=k;l++){
                    maxElement=max(maxElement,arr[l]);
                }
                cout << maxElement << " " ;
            }
        }
        cout << endl;
    }
}