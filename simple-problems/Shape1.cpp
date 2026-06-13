    // Question Link:http://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/P
    #include<iostream>
    #include<bits/stdc++.h>
    using namespace std;

    int main(){
    int n;
    cin >> n;
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout << "*" ;
        }
        cout << endl;
    }
    }

