#include <bits/stdc++.h>
 
#include <iostream>
 
using namespace std;
 
int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
 
    if (n == 1) {
        cout << -1 << endl;
    } else if (n == 2 && arr[0] == arr[1]) {
        cout << -1 << endl;
    } else {
        int minElemIndex = n-1;
        int minElement=INT_MAX;
        for (int i = 0; i < n; i++) {
            if(minElement>=arr[i]){
                minElement=arr[i];
                minElemIndex=i;
            }            
        }
        cout << 1 << endl;
        cout << minElemIndex+1 << endl;
    }
}