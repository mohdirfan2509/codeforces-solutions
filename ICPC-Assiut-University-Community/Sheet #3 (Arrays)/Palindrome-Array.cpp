// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/G
#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;–
    long long arr[n];
    for (long long i = 0; i < n; i++) {
        cin >> arr[i];
    }
    long long rev[n];
    long long index=0;
    for (long long i = n-1; i >= 0; i--) {
        rev[index]=arr[i];
        index++;
    }
    bool flag=true;
    for (long long i = 0; i < n; i++) {
        if(arr[i]!=rev[i]){
            cout << "NO" << endl;
            flag =false;
            break;
        }
    }
    if(flag){
        cout << "YES" << endl;
    }
    
}