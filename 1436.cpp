#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define xn '\n'
using namespace std;
const int N = 1e6+5;
const ll mo = 1e9+7;

string st;
unordered_map <char,bool> mp;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> st;
    for (char i:st){
        if (!mp[i]){
            cout << i;
            mp[i] = 1;
        }
    }
    return 0;
}

