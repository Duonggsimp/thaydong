#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define xn '\n'
using namespace std;
const int N = 1e3+5;
const ll mo = 1e9+7;

ll t;
ll res;
string st;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> t;

    while (t--){  res = 0;
        cin >> st;
        for (char i:st){
            res += i - '0';
        }
        cout << res << xn;
    }

    return 0;
}

