#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int test_cases;
    cin >> test_cases;
    for(int i=0;i<test_cases;i++){
      int n,m;
      cin >> n >> m ;
      vector<string> arr;
      pair<int,int> ans;
      int maxHashes=0;
      for(int j=0;j<n;j++){
        int hashes=0;
        bool flag=true;
        int hashStart=0;
        for(int k=0;k<m;k++){
            char x;
            cin >> x;
            arr[j][k]=x;
            if(arr[j][k]== '#'){
                hashes++;
                if(flag==true){
                    hashStart=k+1;
                    flag=false;
                }
            }
        }
        if(hashes>maxHashes && hashes%2==1){
            maxHashes=hashes;
            ans={j+1,((hashStart+hashes-1)/2)+1};
        }
      }
      cout << ans.first << " " << ans.second << endl;
    }
}