//#include <bits/stdc++.h>
#include "/Users/jeongminlim/stdc++.h"
int C; // Number of test cases, three lines
int a; // polynomial in n of degree i with non negative integer coeffcients in increasing order of power
int d; // positive intger d
int k; // positive integer k

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    //code here
    cin >> C;
    for(int i = 0; i < C; i++){
        vector<int> coefficients ;
        coefficients.clear();
        // accept everything and call the last two elements
        string line;
        getline(std::cin,line);
        istringstream is(line);
        while(is>>a){
            coefficients.push_back(a);
        }
        cin >> d >> k;
        cout << d << k << '\n';// 43, 25100 : getline does not move stream.... 

    }
    return 0;
}



