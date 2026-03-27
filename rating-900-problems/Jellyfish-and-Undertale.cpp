// Question Link : https://codeforces.com/problemset/problem/1875/A

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int test_cases;
    cin >> test_cases;
    for(int i=0;i<test_cases;i++){
        int a,b,n;
        cin >> a >> b >> n;
        int arr[n];
        for(int j=0;j<n;j++){
            int m;
            cin >> m;
            arr[j]=m;
        }
        long long  sum=b;
        for(int j=0;j<n;j++){
            sum=sum+min(arr[j],a-1);
        }
        cout << sum << "\n";
    }
}