#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, l, r, k;
    cin >> n >> l >> r >> k;

    vector<ll> v(n);
    for(ll i = 0; i < n; i++){
        cin >> v[i];
    }

    ll ans = 0;
    for(ll m = 0; m < (1 << n); m++) {
        ll mn = LLONG_MAX, mx = LLONG_MIN, cnt = 0, sum = 0;
        for(ll i = 0; i < n; i++) {
            if((m & (1 << i)) != 0) {
                cnt++;
                sum += v[i];
                mn = min(mn, v[i]);
                mx = max(mx, v[i]);
            }
        }
        if(mx-mn >= k && sum >= l && sum <= r && cnt >= 2) ans++;
    }
    cout << ans << '\n';

    return 0;
}