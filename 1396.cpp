#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define xn '\n'
using namespace std;
const int N = 1e6+5;
const ll mo = 1e9+7;

ll n,dem; 
ll a[N]; 

int main(){
    
    cin >> n;
    a[1]=25;
    a[2]=10;
    a[3]=5;
    a[4]=1;
    for(long i=1; i<=4; i++){
        while(n >= a[i]){
            dem ++;
            n = n-a[i];
        }
    }
      cout << dem;
      return 0;
}
