//#include <bits/stdc++.h>
#include "/Users/jeongminlim/stdc++.h"

using namespace std;
int T; // T <=10
int D; // Size of database
string M; // name of maker
int L, H; // Lowest / Highest price
int Q; // number of query
int P; // query price

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    //code here
    cin >> T;

    for (int i = 0; i < T; i++) {
        cin >> D;

        string makers[D];
        int lowestPrice[D];
        int highestPrice[D];

        for (int j = 0; j < D; j++) {
            cin >> M >> L >> H;
            makers[j] = M;
            lowestPrice[j] = L;
            highestPrice[j] = H;
        }


        cin >> Q;
        for (int j = 0; j < Q; j++) {
            cin >> P;
            int matches = 0;
            int matchIndex = 0;
            for (int k = 0; k < D; k++) {
                if (lowestPrice[k] <= P && highestPrice[k] >= P) {
                    matches++;
                    matchIndex = k;
                }
            }
            if (matches == 1) {
                cout << makers[matchIndex] << '\n';
            } else {
                cout << "UNDETERMINED\n";
            }
        }
        if (i != T - 1) {
            cout << '\n';
        }
    }

    return 0;
}
