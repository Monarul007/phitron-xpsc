#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    // Write your code here
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    
    map<ll, ll> d;
    for (ll i = 0; i < n; ++i) {
        ll a, b;
        cin >> a >> b;
        d[a] += 1;
        d[b] -= 1;
    }

    ll ans = 0;
    ll nowCustomer = 0;
    for (auto entry : d) {
        nowCustomer += entry.second;
        ans = max(ans, nowCustomer);
    }
    cout << ans << '\n';

    return 0;
}