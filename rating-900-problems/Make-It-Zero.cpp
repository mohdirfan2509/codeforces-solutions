// Question Link : https://codeforces.com/problemset/problem/1869/A

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
        int x;
        for(int j=0;j<n;j++){
            cin >> x;
            arr[j]=x;
        }

        int ans=0;
        for(int a:arr){
            ans=ans^a;
        }
        if(ans==0){
            cout << 1 <<"\n";
            cout << 1 << " " << n << "\n";
        }else{
            if(n%2==0){
               cout << 2 <<"\n";
               cout << 1 << " " << n << "\n";
               cout << 1 << " " << n << "\n";
            }else{
               cout << 4 <<"\n";
               cout << 1 << " " << 2<< "\n";
               cout << 1 << " " << 2 << "\n";
               cout << 2 << " " << n << "\n";
               cout << 2 << " " << n << "\n";
            }
        }
    }
}