// Jeong-Min Lim (limjeongmin@wustl.edu)
// Greedy 
// balance 2 to m and compare with n to choose which one to subtract 1 from


//#include <bits/stdc++.h>
#include "/Users/jeongminlim/stdc++.h"

using namespace std;
int n, m, k;
int team;

bool makeTeam() {
    if (n < 2 || m < 1) {
        return false;
    }
    n -= 2;
    m -= 1;
    team++;
    return true;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    //code here
    cin >> n >> m >> k;
    while (k > 0) {
        if (n == max(2 * m, n)) {
            n -= 1;
//            cout << n << "\n";
        } else {
            m -= 1;
//            cout << m << "\n";
        }
        k--;
    }


    while (makeTeam());
    cout << team;

    return 0;
}





