#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define xn '\n'
using namespace std;
const int N = 1e6+5;
const ll mo = 1e9+7;

ll n,x;
ll res;
unordered_map<ll, ll> mp;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n;
    for (long i=1; i<=n; i++){
        cin >> x; 
        res += mp[-x]; 
        mp[x]++; 
    }
  
    cout << res;
    return 0;
}
