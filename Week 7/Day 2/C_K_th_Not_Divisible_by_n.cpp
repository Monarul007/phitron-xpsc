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
        ll n, k;
        cin >> n >> k;
        
        if(k < n){
            cout << k << '\n';
            continue;
        }

        ll ans = k + (k / (n - 1));
        if(ans % n == 0) cout << ans - 1 << '\n';
        else cout << ans << '\n';
    }

    return 0;
}