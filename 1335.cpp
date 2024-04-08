#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define xn '\n'
using namespace std;
const int N = 1e3+5;
const ll mo = 1e9+7;

ll n,m;
string st,s;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> st >> n;
    for (char i:st){
        while (n>0 && !s.empty() && s.back()<i){
            s.pop_back();
            n--;
        } s.push_back(i);
    }

    s.resize(s.size()-n);
    cout << s;
    return 0;
}

