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
        ll n;
        cin >> n;
        string s;
        cin >> s;
        ll count = 0;
        for (ll i = 0; i < n - 1 - i; i++) {
            count += (s[i] != s[n - 1 - i]);
        }
        string ans(n + 1, '0');
        for (ll i = count; i + count <= n; i++) {
            if ((n % 2) || ((i - count) % 2 == 0)) {
                ans[i] = '1';
            }
        }
        cout << ans << '\n';
    }

    return 0;
}