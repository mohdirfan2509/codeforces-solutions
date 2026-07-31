// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Y
#include <bits/stdc++.h>

#include <iostream>

using namespace std;

int main() {
    long long  n, q;
    cin >> n >> q;
    vector<long long > arr(n);
    for (long long  i = 0; i < n; i++) {
        cin >> arr[i];
    }
    vector<pair<long long ,long long >> queries(q);
    for(long long  i=0;i<q;i++){
        cin >> queries[i].first;
        cin >> queries[i].second;
    }
    for(long long  i=0;i<q;i++){
        long long  sum=0;
        for(long long  j=queries[i].first-1;j<=queries[i].second-1;j++){
            sum=sum+arr[j];
        }
        cout << sum << endl;
    }
}