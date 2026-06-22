#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    int n=s.size();
    int right=0;
    int arr[n];
    for(int i=n-1;i>=0;i--){
        if(s[i]=='Q'){
            right++;
        }
        if(s[i]=='A'){
            arr[i]=right;
        }
    }
    int ans=0;
    int left=0;
    for(int i=0;i<n;i++){
        if(s[i]=='Q'){
            left++;
        }
        if(s[i]=='A'){
            ans=ans+left*(right-left);
        }
    }
    cout << ans << endl;
}