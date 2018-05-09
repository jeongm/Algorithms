// Jeong-Min Lim (limjeongmin@wustl.edu)
// https://www.acmicpc.net/problem/11053

#include <bits/stdc++.h>

using namespace std;
int n;
int dp[1010];
int a[1010];
int maxlen;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    //code here
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        dp[i] = 1;
        for (int j = 0; j < i; j++) {
            if (a[i] > a[j] && dp[j] + 1 > dp[i]) {
                dp[i] = dp[j] + 1;
            }
        }

        maxlen = max(maxlen, dp[i]);
    }
    cout << maxlen;

    return 0;
}





