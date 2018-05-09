//#include <bits/stdc++.h>
#include "/Users/jeongminlim/stdc++.h"

using namespace std;
int k;
int e;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    //code here
    cin >> k;
    vector<int> numberSet;
    while (k != 0) {
        numberSet.clear();
        for (int i = 0; i < k; i++) {
            cin >> e;
            numberSet.push_back(e);
        }
        int length = numberSet.size();
        for (int a = 0; a < length - 5; a++) {
            for (int b = a + 1; b < length - 4; b++) {
                for (int c = b + 1; c < length - 3; c++) {
                    for (int d = c + 1; d < length - 2; d++) {
                        for (int e = d + 1; e < length - 1; e++) {
                            for (int f = e + 1; f < length; f++) {
                                cout << numberSet[a] << ' ' << numberSet[b] << ' '
                                     << numberSet[c] << ' ' << numberSet[d] << ' '
                                     << numberSet[e] << ' ' << numberSet[f] << "\n";
                            }
                        }
                    }
                }
            }
        }

        cin >> k;
        if (k != 0){
            cout << "\n";
        }
    }


    return 0;
}
