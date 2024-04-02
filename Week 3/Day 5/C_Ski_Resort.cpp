#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    // Write your code here
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        ll n, k, q;
        cin >> n >> k >> q;
        ll count = 0, ans = 0;
        for(ll i = 0; i < n; i++){
            ll x;
            cin >> x;
            if(x <= q){
                count++;
            }else{
                count = 0;
            }
            ans += (count >= k) ? (count - k + 1) : 0;
        }

        cout << ans << endl;
    }

    return 0;
}