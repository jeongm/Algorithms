
// Jeong-Min Lim (limjeongmin@wustl.edu)

#include <bits/stdc++.h>

using namespace std;
int v, e;
vector<int> graph[10010];
vector<int> reverse_graph[10010];
int a, b;
stack<int> st;
bool visited[10010];
bool visitedK[10010];
vector<int> ans;
vector<vector<int>> vAns;
set<int> pointSet;
int front;

void dfs(int node, vector<int> board[10010]) {
    visited[node] = true;
    for (int i = 0; i < (int) board[node].size(); i++) {
        int next = board[node][i];
        if (!visited[next]) {
            dfs(next, board);
        }
    }
    st.push(node); // Put code here to insert into stack when DFS is over.

}



void kosaraju(int node, vector<int> board[10010]) {
    visitedK[node] = true;
    ans.push_back(node);
    for (int i = 0; i < (int) board[node].size(); i++) {
        int next = board[node][i];
        if (!visitedK[next]) {
            kosaraju(next, board);
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
    cin >> v >> e;
    for (int i = 0; i < e; i++) {
        cin >> a >> b;
        graph[a].push_back(b);
        reverse_graph[b].push_back(a);
        pointSet.insert(a);
        pointSet.insert(b);
    }

    vector<int> points(v);

    copy(pointSet.begin(), pointSet.end(), points.begin());

    for (int i = 1; i <= v; i++) {
        if (visited[i]) {
            continue;
        }
        dfs(i, graph);
    }

    while (!st.empty()) {
        front = st.top();
        st.pop();
        ans.clear();

        if (visitedK[front]) {
            continue;
        }

        kosaraju(front, reverse_graph);
        sort(ans.begin(), ans.end());
        vAns.push_back(ans);
    }

    cout << vAns.size() << "\n";
    sort(vAns.begin(), vAns.end());

    for (auto &i:vAns) {
        for (auto &j:i) {
            cout << j << " ";
        }
        cout << -1 << "\n";
    }

    return 0;
}





