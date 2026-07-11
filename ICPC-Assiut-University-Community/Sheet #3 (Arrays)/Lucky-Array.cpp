// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/J
#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int freq=0;
    int elem=arr[0];
    for (int i = 0; i < n; i++) {
        if(arr[i]==elem){
            freq++;
        }else{
            break;
        }
    }
    if(freq%2==1){
        cout << "Lucky" << endl;
    }else{
        cout << "Unlucky" << endl;
    }
}