#include <bits/stdc++.h>
using namespace std;
#define ll long long

map<ll, ll> mp;
int main()
{
    // Write your code here
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    for(ll i = 1; i <= 10000; i++){
        mp[i*i*i] = 1;
    }

    int t;
    cin >> t;
    while (t--){
        ll x;
        cin >> x;

        ll c = cbrt(x);

        ll fl = 0;
        for(ll i = 1; i <= 10000; i++){
            if(fl){
                break;
            }
            ll z = i*i*i;
            if(z >= x) break;
            if(mp.find(x-z) != mp.end()){
                fl = 1;
                break;
            }
        }
        if(fl){
            cout << "YES" << '\n';
        }else{
            cout << "NO" << '\n';
        }
    }

    return 0;
}