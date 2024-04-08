#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define xn '\n'
using namespace std;
const int N = 1e6+5;
const ll mo = 1e9+7;

ll n; 
ll a[N]; 
ll s,res; 

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n; 
    res = -1e18; 
    for (long i=1; i<=n; i++){
        cin >> a[i]; 
    }
    
    for (long i=1; i<=n; i++){
        s += a[i]; 
        res = max(res,s); 
        if (s <= 0) s = 0; 
    }
    
    cout << res; 
    return 0;
}

