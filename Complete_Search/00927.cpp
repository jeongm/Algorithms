//#include <bits/stdc++.h>
#include "/Users/jeongminlim/stdc++.h"

int C; // Number of test cases, three lines
int a; // polynomial in n of degree i with non negative integer coeffcients in increasing order of power
int d; // positive intger d
int k; // positive integer k

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    //code here
    cin >> C;
    cin.ignore();


    for (int i = 0; i < C; i++) {
        int coefficients[30] = {0};
        string temp;
        getline(cin, temp);
        istringstream iss(temp);

        while (iss >> a) {
            coefficients;
        }

        cin >> d >> k;
        cin.ignore();






    }
    return 0;
}



