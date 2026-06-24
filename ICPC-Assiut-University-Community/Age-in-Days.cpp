// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/R
#include<iostream>
using namespace std;

int main(){
       int n;
       cin >> n;
       cout  << (int)n/365 << " "  << "years" << endl;
       n=n%365;
       cout << (int)n/30 << " " << "months" << endl;
       n=n%30;
       cout << (int)n << " "  << "days" << endl;
      

}