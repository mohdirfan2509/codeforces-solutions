// Question Link : https://codeforces.com/problemset/problem/1380/A
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int test_cases;
    cin >> test_cases;
    for(int i=0;i<test_cases;i++){
     int n;
     cin >> n;
     int arr[n];
     for(int j=0;j<n;j++){
        cin >> arr[j];
     }
     bool flag=false;
     for(int j=1;j<n-1;j++){
        if(arr[j]>arr[j+1] && arr[j]>arr[j-1]){
            cout<< "YES" << endl;
            cout << j-1+1 << " " << j+1 << " " << j+1+1 << endl; 
            flag=true;
            break;
        }
     }
     if(flag==false){
        cout<< "NO" << endl;
     }

    }
}