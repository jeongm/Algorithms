// Jeong-Min Lim (limjeongmin@wustl.edu)

#include <bits/stdc++.h>

using namespace std;
int v, e, k, a, b;
vector<int> graph[20050];
int color[20050];
queue<int> q;
bool isBipartite;
bool first;
int s;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    //code here
    cin >> k;
    while (k--) {
//    while (true) {
        while (!q.empty()) {
            q.pop();
        }

        for (int i = 0; i < 20050; i++) {
            color[i] = 3000;
            graph[i].clear();
        }

        first = true;


        cin >> v >> e;

        for (int i = 0; i < e; i++) {
            cin >> a >> b;
//            if (first) {
//                s = a;      // This did not work for baekjoon test cases. 
//                first = false;
//            }
            graph[a].push_back(b);
        }

        q.push(a);
        color[a] = 0;
        isBipartite = true;

        while (!q.empty() && isBipartite) {
            int u = q.front();
            q.pop();

            for (int j = 0; j < (int) graph[u].size(); j++) {
                int v = graph[u][j];

                if (color[v] == 3000) {
                    color[v] = 1 - color[u];
                    q.push(v);
                } else if (color[v] == color[u]) {
                    isBipartite = false;
                    break;
                }
            }

        }


        if (isBipartite) cout << "YES\n";
        else cout << "NO\n";
    }


    return 0;
}





