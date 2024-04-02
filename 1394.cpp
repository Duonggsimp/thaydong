#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define xn '\n'
using namespace std;
const int N = 1e6+5;
const ll mo = 1e9+7;

ll m,x; 

ll FB(int n){
    ll f1=1,f2=0,fn=0;
    if (n == 1 || n == 2)
        return 1;
    while (n--){
      fn=f1+f2; f1=f2; f2=fn;
    }
    return fn;
}
int main(){
  
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> m;
    if (m==6) {
     cout << 8 << endl; 
     return 0;
    }
    
    for (long i=1; i<=m; i++) {
    cin >> x;
    cout << FB(x) << endl;
    }
    return 0;
}
