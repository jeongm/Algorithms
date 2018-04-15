// Jeong-Min Lim (limjeongmin@wustl.edu)
// https://www.acmicpc.net/problem/2178
#include <bits/stdc++.h>

using namespace std;
int dx[4] = {0, 1, 0, -1}; // clockwise
int dy[4] = {-1, 0, 1, 0};
int board[110][110] = {0,};
int m, n;
string c;


void bfs(int x, int y) {
    queue<pair<int, int>> q;
    q.push(make_pair(x, y));

    while (!q.empty()) {
        x = q.front().first;
        y = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i]; 
            if (nx < 1 || nx > n || ny < 1 || ny > m) {
                continue;
            }
            if (board[nx][ny] == 1) {
                q.push(make_pair(nx, ny));
                board[nx][ny] = board[x][y] + 1;
            }

        }
    }
}


int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    //code here
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> c;
        for (int j = 1; j <= m; j++) {
            board[i][j] = (int) c[j-1] - 48;
        }
    }

    board[1][1] = 2;
    bfs(1, 1);

    cout << board[n][m] - 1 << "\n";


    return 0;
}





