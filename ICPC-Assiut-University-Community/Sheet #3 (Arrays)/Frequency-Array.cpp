// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/V

#include<bits/stdc++.h>

#include<iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    unordered_map<int,int> umap;
    for(int i=0;i<n;i++){
        umap[arr[i]]++;
    }
    for(int i=1;i<=m;i++){
        cout << umap[i] << endl;
    }

}