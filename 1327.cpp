#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define xn '\n'
using namespace std;
const int N = 1e6+5;
const ll mo = 1e9+7;

ll n;
ll res;
pair<ll, ll> a[N];

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    cin >> n;

    for (long i=1; i<=n; i++){
        cin >> a[i].fi;
        a[i].se = i;
    }

    sort(a+1,a+n+1);

    for (long i=1; i<=n; i++){
        if (a[i].se > a[i-1].se ){
            cout << a[i].fi << ' ';
        } else cout << xn << a[i].fi << ' ';
    }
    return 0;
}
