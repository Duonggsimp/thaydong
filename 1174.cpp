#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define xn '\n'
using namespace std;
const int N = 1e3+5;
const ll mo = 1e9+7;

ll t;
ll n,m; 
ll x,y; 
ll d,cnt; 
ll f[N][N]; 
char a[N][N]; 
ll fx[4] = {0,0,-1,1}; 
ll fy[4] = {1,-1,0,0}; 

void dfs (long x,long y){
if (x > 0 && y > 0 && x <= m && y <= n && f[x][y] != 1 && a[x][y] != '#'){
   f[x][y] = 1;
   d++;
   for (long k=0; k<=4; k++){
        ll i = x+fx[k]; 
        ll j = y+fy[k]; 
        dfs(i,j); 
      }
   }
}

void solve(){
cin >> n >> m;

  for (long i = 1 ; i<=25 ; i++)
  for (long j = 1 ; j<=25 ; j++){
    a[i][j] = ' ';
    f[i][j] = 0; 
   }
   
  for (long i = 1; i<=m ; i++)
  for (long j = 1; j<=n ; j++){
    cin >> a[i][j];
    if (a[i][j]=='@'){
        x = i;
        y = j;
    }
  }
  
  dfs(x,y);
  cnt++;
   cout << "Case " << cnt << ": " << d << "\n";
   d = 0;
}

int main(){
    
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  
  cin >> t;
  while (t--)
  solve();
  
  return 0;
}

