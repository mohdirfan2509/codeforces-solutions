#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int cost[26];
    for (int i = 0; i < 26; i++) {
        cin >> cost[i];
    }

    int n = s.size();

    const long long INF = 1e18;

    // parent[i][c] = previous character chosen before character c at i
    // Only 26 choices for every position.
    vector<array<unsigned char, 26>> parent(n);

    long long prev[26], cur[26];

    // Initialize position 0
    for (int c = 0; c < 26; c++) {
        if (s[0] == '?' || s[0] - 'a' == c) {
            prev[c] = 0;
        } else {
            prev[c] = INF;
        }
    }

    // DP
    for (int i = 1; i < n; i++) {

        for (int c = 0; c < 26; c++) {

            // This character is not allowed at this position
            if (s[i] != '?' && s[i] - 'a' != c) {
                cur[c] = INF;
                continue;
            }

            cur[c] = INF;
            int bestPrev = 0;

            for (int p = 0; p < 26; p++) {

                if (prev[p] == INF)
                    continue;

                long long candidate =
                    prev[p] + abs(cost[p] - cost[c]);

                if (candidate < cur[c]) {
                    cur[c] = candidate;
                    bestPrev = p;
                }
                else if (candidate == cur[c] && p < bestPrev) {
                    // Choose smaller previous character
                    bestPrev = p;
                }
            }

            parent[i][c] = bestPrev;
        }

        swap(prev, cur);
    }

    // Find the best final character.
    // If costs are equal, smaller character gives lexicographically
    // smaller string.
    long long answer = INF;
    int last = 0;

    for (int c = 0; c < 26; c++) {
        if (prev[c] < answer) {
            answer = prev[c];
            last = c;
        }
    }

    // Reconstruct answer
    for (int i = n - 1; i >= 0; i--) {
        s[i] = char('a' + last);

        if (i > 0) {
            last = parent[i][last];
        }
    }

    cout << answer << '\n';
    cout << s << '\n';

    return 0;
}