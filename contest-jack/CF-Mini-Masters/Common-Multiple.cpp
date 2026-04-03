#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int test_cases;
    cin >> test_cases;
    for(int i=0;i<test_cases;i++){
        int n;
        cin >> n;
        // vector<int> arr(n);
        unordered_set<int> uset;
        for(int j=0;j<n;j++){
            int x;
            cin >> x;
            // arr[j]=x;
            uset.insert(x);
        }
        cout << uset.size() << endl;


    }
}