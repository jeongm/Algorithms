// Jeong-Min Lim (limjeongmin@wustl.edu)

#include <bits/stdc++.h>

using namespace std;
vector<int> p;
int n, m, a, b, k;

int find(int n) {
    if (p[n] < 0) return n;
    p[n] = find(p[n]);
    return p[n];
}

void merge(int a, int b) {
    a = find(a);
    b = find(b);
    if (a == b) return;
    p[b] = a;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    //code here
    cin >> n >> m;
    for (int i = 0; i < n + 5; i++) {
        p.push_back(-1);
    }


    for (int i = 0; i < m; i++) {
        cin >> k >> a >> b;
        if (k == 0) {
            merge(a, b);
        } else {
            if (find(a) == find(b)) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }


    return 0;
}





