#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define xn '\n'
using namespace std;
const int N = 1e3+5;
const ll mo = 1e9+7;

ll n;
ll l;
ll ans,tmp,vt;
string s;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> s;
    unordered_map <char, ll> mp;

    n = s.size();
    s = ' '+s;
   
    for (long i=1; i<=n; i++){
        tmp = max(tmp , mp[s[i]]);
        if (i - tmp > ans){
            ans = i-tmp;
            vt = tmp+1;
        }
        mp[s[i]] = i;
    }
    
    cout << vt << xn << ans;
    return 0;
}
