#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define xn '\n'
using namespace std;
const int N = 1e3+5;
const ll mo = 1e9+7;

ll l,r;
ll d;

bool C(ll n){
 ll t = 0;
 ll m = n;
 while (n != 0){
     t = t*10 + n%10;
     n/=10;
  }
 return t == m;
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    while (cin >> l >> r){ d = 0;
        for (long i=l; i<=r; i++){
            if (C(i))
                d++;
        } cout << d << xn;
    }
    return 0;
}

