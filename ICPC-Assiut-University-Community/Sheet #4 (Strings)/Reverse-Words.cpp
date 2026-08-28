// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/Q
#include <bits/stdc++.h>

#include <iostream>

using namespace std;

int main() {
    string s;
    getline(cin, s);

    stringstream ss(s);
    vector<string> words;
    string word;

    while (ss >> word) {
        words.push_back(word);
    }

    for (int i = 0; i < words.size(); i++) {
        if (i != words.size() - 1) {
            reverse(words[i].begin(), words[i].end());
            cout << words[i] << " ";
        } else {
            reverse(words[i].begin(), words[i].end());
            cout << words[i] << endl;
        }
    }
}