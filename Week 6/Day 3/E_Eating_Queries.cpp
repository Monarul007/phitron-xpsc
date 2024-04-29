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
    while (t--){
        int n, q;
        cin >> n >> q;
        vector<ll> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a.begin(), a.end(), greater<ll>());

        vector<ll> pref(n, 0);
        pref[0] = a[0];
        for (int i = 1; i < n; i++) {
            pref[i] = pref[i - 1] + a[i];
        }
        while(q--){
            ll x;
            cin >> x;
            if (x > pref[n - 1]) {
                cout << -1 << '\n';
                continue;
            }
            int low = 0, high = n - 1;
            int indx = -1;
            while (low <= high) {
                int mid = low + (high - low) / 2;
                if (pref[mid] >= x) {
                    indx = mid;
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            }
            cout << indx + 1 << '\n';
        }
    }

    return 0;
}