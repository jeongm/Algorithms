// Jeong-Min Lim (limjeongmin@wustl.edu)

//#include <bits/stdc++.h>

#include "/Users/jeongminlim/stdc++.h"

using namespace std;
int dTD[100];
int dBU[100];

int fibTD(int n) {
    if (n <= 1) {
        return n;
    } else {
        if (dTD[n] != 0) {
            return dTD[n];
        }
    }
    dTD[n] = fibTD(n - 1) + fibTD(n - 2);
    return dTD[n];
}

int fibBU(int n) {
    dBU[0] = 0;
    dBU[1] = 1;

    for (int i = 2; i <= n; i++) {
        dBU[i] = dBU[i - 1] + dBU[i - 2];
    }

    return dBU[n];
}


int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    //code here


    cout << fibTD(8) << " " << fibBU(8) << "\n";


    return 0;
}






