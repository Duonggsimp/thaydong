#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define xn '\n'
using namespace std;
const int N = 1e6+5;
const ll mo = 1e9+7;

ll t;
ll n;
ll a[N];

void sng(){
  for (long i=1; i<=N; i++){
    for (long j=i; j<=N; j+=i)
        a[j] += i;
  }
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    sng();

    cin >> t;
    while (t--){
        cin >> n;
        cout << a[n] << xn;
    }
    return 0;
}
