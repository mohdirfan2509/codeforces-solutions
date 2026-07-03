// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/B
#include <iostream>
using namespace std;

int main() {
    long long n,x;
    cin >> n;
    long long arr[n];
    for (long long i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> x ;
    long long position = -1;
    for (long long i = 0; i < n; i++) {
        if(arr[i]==x){
            position=i;
            break;
        }
    }
    cout << position << endl;
}