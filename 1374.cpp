#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define xn '\n'
using namespace std;
const int N = 1e5+5;
const ll mo = 1e9+7; 

ll n,k;
ll sum;
ll l,r,m;
ll a[N]; 

bool C(ll m,ll k){
   ll cnt = 0; 
   ll d = 0; 
   for (long i=1; i<=n; i++){
       cnt += a[i];
    if (cnt > m){
        d++;
        cnt = a[i];
     }
   }
   if (cnt > 0)
    d++;
   return d<=k;
}

int main(){
 
  ios_base::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  
  cin >> n >> k;

  for (long i=1; i<=n ;i++){
    cin >> a[i];
    sum += a[i];
  }
  l = *max_element(a+1,a+n+1);
  r = sum;
  while (l<=r) {
    m = (l+r)/2;
    if (C(m,k))
    r = m-1; else
    l = m+1;
  }
  cout << l;
  return 0;
}

