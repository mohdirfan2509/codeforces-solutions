// Question Link: http://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/D
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
    for (long long i = 0; i < n; i++) {
        if(arr[i]<=10){
            println("A[{}] = {}",i,arr[i]);
        }
    }
}