#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define xn '\n'
using namespace std;
const int N = 1e6+5;
const ll mo = 1e9+7;

ll n,m;

ll Pow(ll n, ll m){
if (m == 0)
    return 1;
  ll res = Pow(n,m/2);
  if (m % 2 == 0)
    return res * res % mo; else
    return n * (res * res % mo) % mo;
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    cin >> n >> m;
    cout << Pow(n,m);
    return 0;
}
