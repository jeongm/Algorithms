// Jeong-Min Lim (limjeongmin@wustl.edu)

#include <bits/stdc++.h>

using namespace std;
int n, m;
unordered_map<string, int> phonebook;
unordered_map<int, string> rphonebook;

string name1, name2;
vector<pair<string, string>> people;
vector<int> graph[30];
vector<int> rgraph[30];
int num, a, b;
int cnt;
stack<int> stck;
bool visited[30];
bool rvisited[30];
vector<int> ans;
vector<vector<int>> final;


void dfs(int vtx) {
    visited[vtx] = true;

    for (int i = 0; i < graph[vtx].size(); i++) {
        int next = graph[vtx][i];
        if (!visited[next]) {
            dfs(next);
        }
    }
    stck.push(vtx);
}

void kosaraju(int vtx) {
    rvisited[vtx] = true;
    ans.push_back(vtx);

    for (int i = 0; i < rgraph[vtx].size(); i++) {
        int next = rgraph[vtx][i];
        if (!rvisited[next]) {
            kosaraju(next);
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
    while (n != 0 && m != 0) {
        for (int i = 0; i < 30; i++) {
            graph[i].clear();
            rgraph[i].clear();
            visited[i] = false;
            rvisited[i] = false;
        }

        while (!stck.empty()) stck.pop();

        people.clear();
        phonebook.clear();
        final.clear();
        num = 0;
        cnt++;

        for (int i = 0; i < m; i++) {
            cin >> name1 >> name2;

            if (phonebook.count(name1) == 0) {
                phonebook[name1] = num;
                rphonebook[num] = name1;
                num++;
            }
            if (phonebook.count(name2) == 0) {
                phonebook[name2] = num;
                rphonebook[num] = name2;
                num++;
            }
            a = phonebook[name1];
            b = phonebook[name2];

            graph[a].push_back(b);
            rgraph[b].push_back(a);
        }


        for (int i = 0; i < n; i++) {
            if (visited[i]) continue;
            dfs(i);
        }


        while (!stck.empty()) {
            int front = stck.top();
            stck.pop();
            ans.clear();
            if (rvisited[front]) continue;

            kosaraju(front);
            final.push_back(ans);

        }

        cout << "Calling circles for data set " << cnt << ":\n";
        for (auto &i:final) {
            bool firstPerson = true;
            for (auto &j:i) {
                if (firstPerson) {
                    cout << rphonebook.at(j);
                    firstPerson = false;
                } else {
                    cout << ", " << rphonebook.at(j);
                }
            }
            cout << "\n";
        }


        cin >> n >> m;
        if (n != 0 && m != 0) cout << "\n";

    }


    return 0;
}





