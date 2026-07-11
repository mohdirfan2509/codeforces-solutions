#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int j = 0; j < n; j++) {
        cin >> arr[j];
    }
    int totalRest = 0;
    int tempRest = 0;
    int firstRest = 0;
    int lastRest = 0;
    bool flag1 = true;
    for (int j = 0; j < n; j++) {
        if (arr[j] == 1) {
            tempRest++;
            if(j==n-1){
                lastRest=tempRest;
            }
            totalRest = max(totalRest, tempRest);
        } else {
            if (flag1) {
                firstRest = tempRest;
                flag1 = false;
            }
            tempRest = 0;
        }
        
    }

    totalRest = max(totalRest, max(tempRest, firstRest + lastRest));
    cout << totalRest << endl;
}