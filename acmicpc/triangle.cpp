#include <bits/stdc++.h>

using namespace std;

int a, b, c;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    //code here
    cin >> a >> b >> c;
    while ((a && b && c) != 0) {
        int maximumSide = max(max(a, b), c);
        if (maximumSide * 2 >= a + b + c) {
            cout << "Invalid" << '\n';
        } else {
            if ((a == b) && (a == c)) {
                cout << "Equilateral" << '\n';

            } else if (((a == b) && (a != c)) || ((b == c) && (b != a)) || ((c == a) && (c != b))) {
                cout << "Isosceles" << '\n';

            } else {
                cout << "Scalene" << '\n';
            }
        }
        cin >> a >> b >> c;
    }
    return 0;
}


