#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    long long n;
    cin >> n;
    long long arr[n];
    for(long long i=0;i<n;i++){
        cin >> arr[i];
        // cout << arr[i]<< " ";
    }
    long long ans=0;
    for(long long i=1;i<n-1;i++){
        // cout << arr[i]<< " ";
            if(arr[i]<arr[i-1] && arr[i]<arr[i+1]){
                ans++;
            }
            if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
                ans++;
            }

    }
    cout << ans << endl;
}