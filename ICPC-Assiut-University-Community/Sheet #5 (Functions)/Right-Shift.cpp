// Question Link:https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/K
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void myRev(vector<int>& nums, int l, int r) {
    int p1 = l, p2 = r;
    while (p1 < p2) {
        int temp = nums[p1];
        nums[p1] = nums[p2];
        nums[p2] = temp;
        p1++;
        p2--;
    }
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    k = k % nums.size();
    myRev(nums, 0, nums.size() - 1);
    myRev(nums, 0, k - 1);
    myRev(nums, k, nums.size() - 1);
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
}