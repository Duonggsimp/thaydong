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
ll l,r,sum; 
ll mid; 

bool check(long long x){
    
    long long cur=0, parts=0;
    for(int i=1;i<=n;i++){
        cur += a[i];
        if(cur > x){
            cur = a[i];
            parts++;
        }
    }
    if(cur > 0) parts++;
    return parts <= k;
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n >> k;
    for (long i=1; i<=n; i++){
        cin >> a[i];
        sum += a[i]; 
    }
  
    l = *max_element(a+1,a+n+1); r = sum;
    while (l <= r){
        mid = (l+r)/2;
        if(check(mid)) r = mid-1;
        else l = mid+1;
    }
    cout << l;
    return 0;
}
