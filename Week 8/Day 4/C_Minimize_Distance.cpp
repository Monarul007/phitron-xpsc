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
        ll arr[n];
        for(ll i = 0; i < n; i++){
            cin >> arr[i];
        }
        vector<ll> v, w;
        for(ll i = 0; i < n; i++){
            if(arr[i] < 0){
                w.push_back(arr[i] * (-1));
            }else if(arr[i] > 0){
                v.push_back(arr[i]);
            }
        }
        sort(v.begin(), v.end());
        sort(w.begin(), w.end());
        ll ans = 0, a = 0, b = 0;
        if(!v.empty()){
            if (v.size() < k) {
                a = v[v.size() - 1];
                ans += a;
            }else{
                a = v[v.size() - 1];
                for(ll i = 0; i < v.size(); i++){
                    if(i == v.size() - 1){
                        ans += v[i];
                    }else if((v.size() - i - 1) % k == 0){
                        ans += v[i] * 2;
                    }
                }
            }
        }
        if (!w.empty()) {
            if (w.size() < k) {
                b = w[w.size() - 1];
                ans += b;
            } else {
                b = w[w.size() - 1];
                for (ll i = 0; i < w.size(); i++) {
                    if (i == w.size() - 1) {
                        ans += w[i];
                    } else if ((w.size() - i - 1) % k == 0) {
                        ans += w[i] * 2;
                    }
                }
            }
        }
        ans += min(a, b);
        cout << ans << "\n";
    }

    return 0;
}