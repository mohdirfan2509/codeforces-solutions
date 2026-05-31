#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
      int n;
      cin >> n;
      vector<int> arr(n);
      for(int j=0;j<n;j++){
        cin >> arr[j];
      }
      sort(arr.begin(),arr.end());
      for(int j=0;j<n;j++){
        cout << arr[j] << " ";
      }
      cout << endl;
}