//#include <bits/stdc++.h>
#include "/Users/jeongminlim/stdc++.h"

using namespace std;
int f, r;
int teeth;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    //code here
    cin >> f >> r;

    vector<int> frontTeeth;
    vector<int> rearTeeth;
    vector<double> driveRatios;
    vector<double> spread;

    for (int i = 0; i < f; i++) {
        cin >> teeth;
        frontTeeth.push_back(teeth);
    }

    for (int i = 0; i < r; i++) {
        cin >> teeth;
        rearTeeth.push_back(teeth);
    }

    for (auto &i:frontTeeth) {
        for (auto &j:rearTeeth) {
            driveRatios.push_back((i / (double) j));
        }
    }

    sort(driveRatios.begin(), driveRatios.end());

    for (int i = 0; i < driveRatios.size() - 1; i++) {
        spread.push_back(driveRatios[i + 1] / driveRatios[i]);
    }

    double maxSpread = -1;
    for (auto &i:spread) {
        if (i > maxSpread) {
            maxSpread = i;
        }
    }

    cout << setprecision(2) << fixed << maxSpread;


    return 0;
}
