#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define xn '\n'
using namespace std;
const int N = 1e6+5;
const ll mo = 1e9+7;

ll n,k;
ll a[N]; 
ll b[N]; 
ll res;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n ;

   for (long i=1; i<=n; i++)
      cin >> a[i];
   for (long i=1; i<=n; i++)
      cin >> b[i];


  sort (b+1,b+n+1);
  for (long i=1; i<=n; i++){
      ll vt =lower_bound(b+1,b+n+1,-a[i])-b;
      res = min(res, abs(b[vt]+a[i]));
      res = min(res, abs(b[vt-1]+a[i]));
      res = min(res, abs(b[vt+1]+a[i]));
   }

      cout << mi;
    return 0;
}
