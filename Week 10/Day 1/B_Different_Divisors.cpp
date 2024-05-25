#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 1e15;

bool isPrime(ll x){
    if(x == 2 || x == 3 || x == 5){return true;}
    if(x % 2 == 0 || x % 3 == 0 || x % 5 == 0){return false;}
    for(ll p = 7; p * p <= x; p += 2){if(x % p == 0){return false;}}
    return true;
}

int main()
{
    // Write your code here
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t; 
    cin >> t;
    while(t--){
        ll d; 
        cin >> d;
        ll x(1), y(1);
        for(ll i = d + 1; i <= N; i++){
            if(isPrime(i)){
                x = i; break;
            }
        }
        y = x * x;
        for(ll i = x + d; i < x * x; i++){
            if(isPrime(i)){
                y = i; break;
            }
        }
        ll ans = x * y;
        cout << ans << '\n';
    }

    return 0;
}