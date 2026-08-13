// Question Link: https://codeforces.com/problemset/problem/1659/A
#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int main() {
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++) {
        int n, r, b;
        cin >> n >> r >> b;

        string s;

        int lengthOfRed=r/(b+1);

        int extraRed=r%(b+1);

        for(int times=1;times<=b+1;times++){

            for(int j=0;j<lengthOfRed;j++)  s+='R';

            if(extraRed>0){
                s+='R';
                extraRed--;
            }

            if(times != b+1) s+='B';
        }
        cout << s << endl;
    }
}