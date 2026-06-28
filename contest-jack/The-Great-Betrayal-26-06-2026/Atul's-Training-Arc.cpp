// Question Link: https://codeforces.com/group/zOa9U7TcXb/contest/700735/problem/G
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
    int ans = 0;
    int dayNum = 1;
    for (int i = 0; i < n; i++) {
        if (arr[i] >= dayNum) {
            ans++;
            dayNum++;
        }
    }
    cout << ans << endl;
}