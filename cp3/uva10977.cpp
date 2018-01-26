//#include <bits/stdc++.h>
#include "/Users/jeongminlim/stdc++.h"

using namespace std;
int k;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    //code here
    vector<int> numberRange;
    while (cin >> k) {
        numberRange.clear();
        int pairs = 0;
        for (int i = k + 1; i < 2 * k + 1; i++) {
            if ((k * i) % (i - k) == 0) {
                pairs++;
            }
        }
        cout << pairs << "\n";
        for (int i = k + 1; i < 2 * k + 1; i++) {
            if ((k * i) % (i - k) == 0) {
                cout << "1/" << k << " = " << "1/" << (k * i) / (i - k) << " + " << "1/" << i << "\n";
            }
        }


    }


    return 0;
}
