#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define xn '\n'
using namespace std;
const int N = 1e6+5;
const ll mo = 1e9+7;

ll l,r;
ll res;
bool f[N];

bool C(ll n){
 ll t = 0;
 ll m = n;
 while (n != 0){
     t = t*10 + n%10;
     n/=10;
  }
 return t == m;
}

void sng(){
  fill(f+1,f+N+1,1);
  f[0] = f[1] = 0;
  for (long i=2; i<=sqrt(N); i++){
    if (f[i])
     for (long j=2*i; j<=N; j+=i)
        f[j] = 0;
  }
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    sng();
    cin >> l >> r;
    for (long i=l; i<=r; i++){
        if (f[i] && C(i)) res++;
    }

    cout << res;
    return 0;
}

