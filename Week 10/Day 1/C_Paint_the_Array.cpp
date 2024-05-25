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
        int n;
        cin >> n;
        vector<ll> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        vector<ll> g(a.begin(), a.begin() + 2);
        for(int i = 0; i < n; i++){
            g[i % 2] = __gcd(g[i % 2], a[i]);
        }  
        vector<bool> gy(2, true);
        for(int i = 0; i < n; i++){
            gy[i % 2] = gy[i % 2] && (a[i] % g[(i % 2) ^ 1] > 0);
        }   
        ll ans = 0;
        for(int i = 0; i < 2; i++){
            if(gy[i]){
                ans = max(ans, g[i ^ 1]);
            }
        }
        cout << ans << '\n';
    }

    return 0;
}