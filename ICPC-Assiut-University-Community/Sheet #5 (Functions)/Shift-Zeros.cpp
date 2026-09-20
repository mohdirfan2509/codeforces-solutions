// Question Link:https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/N
#include <bits/stdc++.h>

#include <iostream>
using namespace std;

void moveZeroes(vector<int>& nums) {
    int n = nums.size();
    int p1 = 0;
    int p2 = n - 1;
    while (p1 < p2) {
        if (nums[p1] == 0) {
            int i = p1;
            while (i < p2) {
                swap(nums[i], nums[i + 1]);
                i++;
            }
            p2--;
        }
        if (nums[p1] != 0) {
            p1++;
        }
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    moveZeroes(arr);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}