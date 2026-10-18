// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/A
#include <iostream>
using namespace std;

void printWord(int n) {
    if (n <= 0) {
        return;
    } else {
        cout << "I love Recursion" << endl;
        printWord(n - 1);
    }
}

int main() {
    int n;
    cin >> n;
    printWord(n);
}