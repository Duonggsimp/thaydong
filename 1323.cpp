#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define xn '\n'
using namespace std;
const int N = 1e6+5;
const ll mo = 1e9+7;

ll n,m,k,x;
ll d;
ll a[N];
ll minn;


int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    cin >> n >> m >> k;
    minn = -1e18;

    for (long i=1; i<=n*m; i++){
        cin >> x;
        a[x]++;
        minn = max(minn, x);
    }
    
    sort (a+1,a+minn+1);
    reverse (a+1,a+minn+1);

    for (long i=1; i<=k; i++){
        d += a[i];
    }
    
    cout << d;
    return 0;
}

