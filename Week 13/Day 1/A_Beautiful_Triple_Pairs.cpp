#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    // Write your code here
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        ll n, ans = 0;
        cin >> n;
        map<tuple<ll, ll, ll>, ll> m;
        vector<ll> v(n);
        for (auto &x : v){
            cin >> x;
        }
        for (ll i = 0; i + 2 < n; i++){
            ans += (m[{v[i], v[i + 1], -1}] + m[{v[i], -1, v[i + 2]}] + m[{-1, v[i + 1], v[i + 2]}] - 3 * m[{v[i], v[i + 1], v[i + 2]}]);
            m[{v[i], v[i + 1], -1}]++;
            m[{v[i], -1, v[i + 2]}]++;
            m[{-1, v[i + 1], v[i + 2]}]++;
            m[{v[i], v[i + 1], v[i + 2]}]++;
        }
        cout << ans << '\n';
    }

    return 0;
}