// Jeong Min Lim (limjeongmin@wustl.edu)
//
#include <bits/stdc++.h>

using namespace std;
int m, n, a;
int matrix[1000][1000];
vector<pair<int, int>> coord;
pair<int, int> zero_loc;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    //code here
    memset(matrix, -1, sizeof(a));

    cin >> m>> n;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a;
            if (a == 0) {
                a = -1;
            }
            matrix[i][j] = a;
            cout << a << ' ';
        }
        cout << '\n';
    }

    cout << "----------------\n";



    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] == -1) {
                for (int p = 0; p < n; p++) {
                    if(matrix[i][p] == -1){
                        continue;
                    }
                    matrix[i][p] = -2;
                }
                for (int q = 0; q < m; q++) {
                    if(matrix[q][j] == -1){
                        continue;
                    }
                    matrix[q][j] = -2;
                }
            }
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] == -2 || matrix[i][j] == -1 ) {
                cout << 0 << ' ';
            } else {
                cout << matrix[i][j] << ' ';
            }
        }
        cout << '\n';
    }


    return 0;
}


