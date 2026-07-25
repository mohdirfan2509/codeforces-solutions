// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/U
#include <bits/stdc++.h>

#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> arrA(n);
    vector<int> arrB(m);
    for (int i = 0; i < n; i++) {
        cin >> arrA[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> arrB[i];
    }
    int p2=0;
    for(int i=0;i<n;i++){
        if(p2!=m && arrA[i]==arrB[p2]){
            p2++;
        }
    }
    if(p2>=m){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}