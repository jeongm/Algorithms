//#include <bits/stdc++.h>
#include "/Users/jeongminlim/stdc++.h"

using namespace std;
int N; // number of tests
int K; // number of paid characters
char letter;
int value; // in cents
int M; // number of lines, 0<M<150000
map<char, int> payment;


int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    //code here
    cin >> N;
    while (N--) {
        cin >> K;
        int totalPrice = 0;
        payment.clear();

        for (int i = 0; i < K; i++) {
            cin >> letter >> value;
            payment[letter] = value;
        }

        cin >> M;

        for (int i = 0; i < M + 1; i++) { // M + 1 to get all lines
            int price = 0;
            char c;
            string line;
            getline(cin, line);
            std::istringstream iss(line);
            while (iss >> c) {
                price += payment[c];
            }
            totalPrice += price;
        }


        cout << setprecision(2) << fixed << totalPrice / 100.00 << "$\n";


    }


    return 0;
}





