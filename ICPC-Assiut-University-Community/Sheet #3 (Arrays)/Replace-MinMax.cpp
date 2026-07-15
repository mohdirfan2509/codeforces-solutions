// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/M
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
    int minElement = INT_MAX;
    int minElIndex = 0;
    int maxElement = INT_MIN;
    int maxElIndex = 0;
    for (int i = 0; i < n; i++) {
        if(minElement>arr[i]){
            minElement=arr[i];
            minElIndex=i;
        }
        if(maxElement<arr[i]){
            maxElement=arr[i];
            maxElIndex=i;
        }
    }
    int temp=arr[minElIndex];
    arr[minElIndex]=arr[maxElIndex];
    arr[maxElIndex]=temp;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

}