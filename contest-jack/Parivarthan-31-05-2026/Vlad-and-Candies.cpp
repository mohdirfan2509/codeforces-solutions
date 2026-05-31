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
        sort(arr.begin(),arr.end());
        
        if(n==1){
            if(arr[0]==1){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }
        }else{
           if(arr[n-1]-arr[n-2]<=1){
            cout << "YES" << endl;
           }else{
            cout << "NO" << endl;
           }
        }
    }
}