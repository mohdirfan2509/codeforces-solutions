#include <bits/stdc++.h>

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> arr(n);
    for(int i=0;i<n;i++){
        string s;
        cin >> s;
        arr[i]=s;
    }
    unordered_map<char,int> umap;
    for(int i=0;i<n;i++){
        umap[arr[i][0]]++;
    }
    int ans=0;
    for(auto elem :umap){
        int value=elem.second;
        if(value >1 && value % 2==0){
            int temp=(value/2);
            ans += ((temp*(temp+1))/2)-temp;
            ans += ((temp*(temp+1))/2)-temp;
        }else if(value >1 && value %2==1){
            int temp1=(value/2);
            ans += ((temp1*(temp1+1))/2)-temp1;
            int temp2=value-temp1;
            ans+=((temp2*(temp2+1))/2)-temp2;
        }
    }
    cout << ans << endl;
}