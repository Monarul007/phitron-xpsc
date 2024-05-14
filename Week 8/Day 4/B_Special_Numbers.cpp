#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll INF = 1e9+7;

int main()
{
    // Write your code here
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        ll p = 1;
        ll ans = 0;
        for (int j = 0; j < 31; j++) {
            if (k & (1 << j)) {
                ans = (ans + p) % INF;
            }
            p *= n;
            p %= INF;
        }
        cout << ans << "\n";
    }

    return 0;
}