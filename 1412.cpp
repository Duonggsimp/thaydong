#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define xn '\n'
using namespace std;
const int N = 1e6+5;
const ll mo = 1e9+7;

ll n; 
ll x; 

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
  
    cin >> n;
    set <ll> a;
      for(long i=1;i<=n;i++){
      cin >> x;
      for (long j=1; j<=sqrt(x); j++)
          if (x%j == 0){
              a.insert(j);
              a.insert(x/j);
           }
          for(auto it:a)
             cout << it << ' '; 
             cout << xn; 
       a.clear();
    }
    return 0;
}
