// Jeong-Min Lim (limjeongmin@wustl.edu)

//#include <bits/stdc++.h>


#include "/Users/jeongminlim/stdc++.h"

using namespace std;
int pea = -(1 << 30);

int n, budget, c, price[25][25];
int memo[210][25];

int shop(int money, int g) {
    if (money < 0) {
        return pea;
    }

    if (g == c) {
        return budget - money;

    }

    if (memo[money][g] != -1) {
        return memo[money][g];
    }

    int ans = -1;
    for (int model = 1; model <= price[g][0]; model++) {
        ans = max(ans, shop(money - price[g][model], g + 1));
    }
    return memo[money][g] = ans;


}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    //code here
    cin >> n;
    while (n--) {
        cin >> budget >> c;

        memset(price, 0, sizeof(price));
        memset(memo, -1, sizeof(memo));


        for (int i = 0; i < c; i++) {
            cin >> price[i][0];
            for (int j = 1; j <= price[i][0]; j++) {
                cin >> price[i][j];
            }
        }



        int score = shop(budget, 0);
        if (score < 0) {
            cout << "no solution\n";
        } else {
            cout << score << "\n";
        }


    }


    return 0;
}





