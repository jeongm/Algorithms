// Jeong Min Lim limjeongmin@wustl.edu
// UVa Online Judge 272 TEX Quotes
#include <iostream>
#include <stdio.h>
#include <sstream>
#include <string>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    // code here

    string line;

    bool dIsOpen = false;
    bool sIsOpen = false;

    while (getline(cin, line)) {


        for (char e : line) {
            if (e == '"') {
                if (!dIsOpen) {
                    dIsOpen = true;
                    cout << '`' << '`';

                } else {
                    dIsOpen = false;
                    cout << '\'' << '\'';
                }
            } else if (e == '\'') {
                if (!sIsOpen) {
                    sIsOpen = true;
                    cout << '`';
                } else {
                    sIsOpen = false;
                    cout << '\'';
                }
            } else {
                cout << e;
            }
        }
        cout << '\n';

    }


    return 0;
}
