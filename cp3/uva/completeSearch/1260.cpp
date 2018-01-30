//#include <bits/stdc++.h>
#include "/Users/jeongminlim/stdc++.h"

using namespace std;
int T; // testcase
int n; // size of list A
int a; // values
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    //code here

    cin >> T;

    for (int i = 0; i < T; i++){
        cin >> n;
        vector<int> sales;
        for (int j = 0; j < n; j++){
            cin >> a;
            sales.push_back(a);
        }
        int sum = 0;
        for (int j = 1; j < n; j++){
            for (int k = 0; k < j; k++){
                if (sales[k] <= sales[j]){
                    sum++;
                }
            }
        }

        cout << sum << "\n";








    }
    return 0;
}
