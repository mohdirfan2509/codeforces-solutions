// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/R
#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arrA(n);
    vector<int> arrB(n);
    for (int i = 0; i < n; i++) {
        cin >> arrA[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> arrB[i];
    }
    sort(arrA.begin(), arrA.end());
    sort(arrB.begin(), arrB.end());
    bool flag = true;
    for (int i = 0; i < n; i++) {
        if(arrA[i]!=arrB[i]){
            flag=false;
            break;
        }
    }
    if(flag){
        cout << "yes" << endl;
    }else{
        cout << "no" << endl;
    }
}