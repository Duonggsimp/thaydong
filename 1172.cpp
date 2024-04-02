#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define xn '\n'
using namespace std;
const int N = 1e3+5;
const ll mo = 1e9+7;

ll n,d,t;
ll a[N][N];
ll dp[N][N];

void solve(){

  cin >> n;
  d++;
  for (long i=1; i<=n; i++){
    for (long j=1; j<=i; j++)
        cin >> a[i][j];
  }

  for (long i=n+1; i<=n*2-1; i++){
    for (long j=1; j<=2*n-i; j++)
        cin >> a[i][j];
  }

  for (long i=1; i<=n; i++){
    for (long j=1; j<=i; j++)
        dp[i][j] = max(dp[i-1][j-1],dp[i-1][j]) + a[i][j];
  }

  for (long i=n+1; i<=n*2-1; i++){
    for (long j=1; j<=n*2-i; j++)
        dp[i][j] = max(dp[i-1][j+1],dp[i-1][j]) + a[i][j];
  }
  cout << "Case " << d << ": " << dp[2*n-1][1] << xn;
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    cin >> t;
    while (t--)
        solve();
    return 0;
}
