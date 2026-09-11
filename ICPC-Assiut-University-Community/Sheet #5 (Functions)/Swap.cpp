// Question Link:https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/E
#include <iostream>
using namespace std;

pair<int, int> mySwap(pair<int, int> p) {
    return {p.second, p.first};
}

int main() {
    int x, y;
    cin >> x >> y;

    cout << mySwap({x, y}).first << " " << mySwap({x, y}).second << endl;
}