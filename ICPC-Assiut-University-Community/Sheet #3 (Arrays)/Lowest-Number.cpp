// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/E
#include <iostream>
#include <bits/stdc++.h>
#include<print>

using namespace std;

int main() {
    long long n, x;
    cin >> n;
    long long arr[n];
    for (long long i = 0; i < n; i++) {
        cin >> arr[i];
    }
    long long lowestValIdx=0;
    long long lowestVal=LONG_LONG_MAX;
    for (long long i = 0; i < n; i++) {
        if(arr[i]<lowestVal){
            lowestVal=arr[i];
            lowestValIdx=i+1;
        }
    }
    cout << lowestVal << " " << lowestValIdx << endl;
}