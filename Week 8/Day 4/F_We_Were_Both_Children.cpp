#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    // Write your code here
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;               
    cin>>t;
    while(t--){
        int n;            
        cin >> n;
        vector<ll> a(n);
        for(int i = 0;i < n; i++){
            cin >> a[i];
        }

        vector<ll> freq(n+2,0);
        for(int i = 0; i < n; i++){
            if(a[i] > n) continue;
            freq[a[i]]++;
        }

        ll ans = 0;
        for(int i = 1;i <= n; i++){
            ll  itrapped = 0;
            for(ll x = 1; x * x <= i; x++){
                if(i % x == 0){
                     itrapped += freq[x];
                    if(x * x != i){
                        itrapped += freq[i/x];
                    }
                }
            }
            ans = max(ans, itrapped);
        }
        cout << ans << '\n';
    }

    return 0;
}