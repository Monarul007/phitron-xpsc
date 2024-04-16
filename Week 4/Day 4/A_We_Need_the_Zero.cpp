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
    while(t--){
        ll n;
        cin >> n;

        ll ans = 0;
        for(ll i = 0; i < n; i++){
            ll x;
            cin >> x;
            ans = ans ^ x;
        }

        if(n % 2){
            cout << ans << '\n';
        }else{
            cout << (ans ? -1 : 0) << '\n';
        }
    }

    return 0;
}