// Jeong-Min Lim (limjeongmin@wustl.edu)

//#include <bits/stdc++.h>

#include "/Users/jeongminlim/stdc++.h"

using namespace std;

int N;
int W;
int price[1010];
int weight[1010];
int D[10010];

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    //code here
    memset(D, 0, sizeof(D));
    memset(price, 0, sizeof(price));
    memset(weight, 0, sizeof(weight));

    cin >> N >> W;

    for (int i = 1; i <= N; i++) {
        cin >> weight[i] >> price[i];
    }

    for (int i = 1; i <= N; i++) {
        for (int j = weight[i]; j <= W; j++) {
            D[j] = max(D[j], D[j - weight[i]] + price[i]);
        }
    }


    cout << D[W];


    return 0;
}





