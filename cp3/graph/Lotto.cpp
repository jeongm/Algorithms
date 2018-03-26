// Jeong-Min Lim (limjeongmin@wustl.edu)

#include <bits/stdc++.h>

using namespace std;
int k;
int s[15], cnt;
string ans;

void dfs(int v, string str) {
    if (cnt == 6) {
        ans += str;
        ans += "\n";
    } else {
        for (int i = v + 1; i < k; i++) {
            cnt++;
            dfs(i, str + to_string(s[i]) + " ");
        }
    }

    cnt--;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    //code here
    cin >> k;
    while (k != 0) {
        ans.clear();
        
        for (int i = 0; i < k; i++) {
            cin >> s[i];
        }

        for (int i = 0; i < k; i++) {
            cnt = 1;
            dfs(i, to_string(s[i]) + " ");
        }

        cout << ans;



        cin >> k;
        if(k!=0){
            cout << "\n";
        }
    }


    return 0;
}





