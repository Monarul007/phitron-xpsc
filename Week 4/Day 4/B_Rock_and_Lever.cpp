#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    // Write your code here
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--) {
        vector<ll> v(67, 0);
        ll n;
        cin >> n;
        ll ans = 0;
        for (ll i = 0; i < n; i++) {
            ll x;
            cin >> x;
            ll count = 0;
            while (x > 1) {
                x /= 2;
                count++;
            }
            ans += v[count]++;
        }
        cout << ans << '\n';
    }

    return 0;
}