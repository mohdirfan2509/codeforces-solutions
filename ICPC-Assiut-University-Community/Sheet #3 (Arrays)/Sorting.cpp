// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/H
#include <iostream>
using namespace std;

int main() {
    int n, x;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        int curr = arr[i];
        int index = i;
        for (int j = i; j < n; j++) {
            if (curr > arr[j]) {
                index = j;
                curr=arr[j];
            }
        }
        if (arr[index] < arr[i]) {
            int temp = arr[i];
            arr[i] = arr[index];
            arr[index] = temp;
        }
    }
     for (int i = 0; i < n; i++) {
        cout << arr[i] << " " ;
    }
    cout << endl;
}