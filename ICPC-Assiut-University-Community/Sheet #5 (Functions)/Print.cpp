// Question Link:https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/B
#include <iostream>
using namespace std;

void print(int n) {
    for (int i = 1; i <= n; i++) {
        if (i == n) {
            cout << i << endl;
        } else {
            cout << i << " ";
        }
    }
}
int main() {
    int n;
    cin >> n;

    print(n);
}