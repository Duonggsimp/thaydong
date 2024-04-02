#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define xn '\n'
using namespace std;
const int N = 2e6+5;
const ll mo = 1e9+7;

ll n;
ll a[N];
ll l,r;
ll res;
ll ans, tmp;
ll mp[N];

void sng(){
  fill(a+1,a+N+1,0);
 for (long i=2; i<=N; i++){
    if (!a[i]){
        for (long j = i; j<=N; j+=i)
            a[j] = i;
          }
     }
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    sng();

    cin >> l >> r;
    for (long i=l; i<=r; i++){
    n = i;
    ll ans = 1;
       while (n > 1){
           ans *= a[n];
           tmp = a[n];
           while (n % tmp == 0)
            n /= tmp;
       }
       res += mp[ans];
       mp[ans]++;
    }

    cout << res;
    return 0;
}
