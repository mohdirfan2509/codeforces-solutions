#include <bits/stdc++.h>

#include <iostream>

using namespace std;

int main() {
   double h,l;
   cin >> h >> l;
   double ans= (l*l-h*h)/(2*h);
   printf("%.13f",ans);
   
}