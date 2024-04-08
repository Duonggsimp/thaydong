#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define xn '\n'
using namespace std;
const int N = 1e6+5;
const ll mo = 1e9+7;

ll n,m;
ll i,j;
ll res;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n;
    i = 1;
    while (n > 0){
        n -= j;
        i++;
        j += i;
        res++;
    }

    cout << res - 1;
    return 0;
}

