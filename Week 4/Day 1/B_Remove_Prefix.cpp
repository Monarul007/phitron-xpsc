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
        vector<ll> a(n); 
        for(ll i = 0; i < n; i++){
            cin >> a[i];
        }
        set<ll> s; 
        ll ans = 0;
        for(ll i = n - 1; i >= 0; i--){
            if(s.count(a[i])){
                ans = i + 1;
                break;
            }
            s.insert(a[i]);
        }

        cout << ans << '\n';
    }

    return 0;
}