#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    // Write your code here
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    const vector<ll> v = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll cnt(0); map<ll, ll> mp;
        vector<ll> res(n);
        for (ll i = 0; i < n; i++) {
            ll a; cin >> a;
            for(ll j = 0; j < v.size(); j++){
                if (a % v[j]) { continue; }
                if (!mp.count(v[j])) { mp[v[j]] = ++cnt; }
                res[i] = mp[v[j]];
                break;
            }
        }

        cout << cnt << '\n';
        for (ll i = 0; i < n; i++){ 
            cout << res[i] << " "; 
        }
        cout << '\n';
    }

    return 0;
}