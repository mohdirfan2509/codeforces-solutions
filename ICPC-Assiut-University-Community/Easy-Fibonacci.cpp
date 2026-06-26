// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Y
#include<iostream>
using namespace std;


int main(){
    int n;
    cin >> n;
    if(n>=1) cout << 0 << " " ;
    if(n>=2) cout << 1 << " " ;
    int  a=0;
    int b=1;
    for(int i=3;i<=n;i++){
        int c=a+b;
        cout << c << " ";
        a=b;
        b=c;
    }
}