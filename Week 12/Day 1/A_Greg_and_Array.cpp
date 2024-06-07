#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    // Write your code here
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m, k;
    cin >> n >> m >> k;
    
    vector<ll> a(n + 1);
    for (ll i = 1; i <= n; i++) {
        cin >> a[i];
    }
    
    vector<tuple<ll, ll, ll>> op(m + 1);
    for (ll i = 1; i <= m; i++) {
        ll l, r, d;
        cin >> l >> r >> d;
        op[i] = make_tuple(l, r, d);
    }
    
    vector<ll> ocount(m + 2);
    for (ll i = 0; i < k; i++) {
        ll x, y;
        cin >> x >> y;
        ocount[x] += 1;
        ocount[y + 1] -= 1;
    }
    
    for (ll i = 1; i <= m; i++) {
        ocount[i] += ocount[i - 1];
    }
    
    vector<ll> del(n + 2, 0);
    for (ll i = 1; i <= m; i++) {
        ll l, r, d;
        tie(l, r, d) = op[i];
        del[l] += ocount[i] * d;
        del[r + 1] -= ocount[i] * d;
    }
    
    for (ll i = 1; i <= n; i++) {
        del[i] += del[i - 1];
        a[i] += del[i];
    }
    
    for (ll i = 1; i <= n; i++) {
        cout << a[i] << " ";
    }
    cout << "\n";

    return 0;
}