#include <iostream>
using namespace std;
#include <math.h>
// Jeong Min Lim (limjeongmin@wustl.edu)
//
using namespace std;
int t, n; 



int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    //code here
    cin >> t;
    int long long k = 0;
    for(int i = 0; i < t; i++){
        cin >> n;
        
        if(n == 2){
            cout << 1;
        }else if(n % 3 == 0){
            k = pow(3,n/3);
            cout << k;
        }else if(n%3 ==1){
                        k = pow(3, (n-4)/3)*4;
            cout << k;

        }else{
                        k = pow(3, (n-2)/3)*2;
            cout << k;

        }
        cout << '\n';
     
    }

    return 0;
}


