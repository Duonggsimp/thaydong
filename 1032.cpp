#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define xn '\n'
using namespace std;
const int N = 1e6+5;
const ll mo = 1e9+7;

ll n,m,x; 
ll a[N]; 
ll b[N]; 
ll l,r; 
ll res; 

int main (){
    
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    cin >> n >> m >> x;
    
    for (long i=1; i<=n; i++) cin >> a[i];
    for (long i=1; i<=m; i++) cin >> b[i];
    
    sort (b+1,b+1+m);
    
    for (long i=1; i<=n; i++){
         r = upper_bound (b+1,b+1+m,x-a[i])-b;
         l = lower_bound(b+1,b+1+m,x-a[i])-b;
         res += r-l;
    }
    
    cout << res;
    return 0;
}

