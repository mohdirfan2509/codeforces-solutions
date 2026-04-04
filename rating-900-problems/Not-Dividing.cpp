// Question Link : https://codeforces.com/problemset/problem/1794/B

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

        for(int j=0;j<n-1;j++){
            if(arr[j]==1){
                arr[j]++;
            }
        }

        for(int j=0;j<n-1;j++){ 
            if(arr[j+1]%arr[j]==0){
                arr[j+1]++;
            }
        }

        for(int a:arr){
            cout << a << " ";
        }
        cout << endl;
    }
}