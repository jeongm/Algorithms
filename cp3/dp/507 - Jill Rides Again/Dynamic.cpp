// Jeong-Min Lim (limjeongmin@wustl.edu)

//#include <bits/stdc++.h>
// int pea = 1<<30 + ((1<<30)-1);

#include "/Users/jeongminlim/stdc++.h"

using namespace std;
int b;
int s;
int routes[20100];
int dp[20100];
int sum, ans;
int r;
int f, e, mmaaxx;
int newMin;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    //code here
    cin >> b;
    while (b--) {
        memset(routes, 0, sizeof(routes));
        sum = 0;
        ans = 0;
        r++;
        f = 1;
        e = 1;
        mmaaxx = -1;
        newMin = 0;


        cin >> s;
        for (int i = 1; i < s; i++) {
            cin >> routes[i];
        }

        for (int i = 1; i < s; i++) {
            sum += routes[i];
            if (sum > ans || (sum == ans && i - newMin > e - f)) {
                ans = sum;
                e = i;
                f = newMin;
            }
            if(sum < 0){
                newMin = i;
                sum = 0;
            }
        }


        if (ans > 0) {
            cout << "The nicest part of route " << r << " is between stops " << f + 1 << " and " << e + 1 << "\n";
        } else {
            cout << "Route " << r << " has no nice parts\n";
        }


    }


    return 0;
}





