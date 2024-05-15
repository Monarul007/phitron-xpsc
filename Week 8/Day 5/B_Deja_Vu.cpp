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
        ll n, q;
        cin >> n >> q;

        ll arr[n];
        for(ll i = 0; i < n; i++) cin >> arr[i];
        
        ll brr[q];
        for(ll i = 0; i < q; i++) cin >> brr[i];

        unordered_set<ll> ss;
        for(ll i = 0; i < q; i++){
            if(ss.count(brr[i])) continue;
            ss.insert(brr[i]);
            for(ll j = 0; j < n; j++) {
                if(arr[j] % (1 << brr[i]) == 0) arr[j] += (1 << (brr[i] - 1));
            }
        }
        for(auto i : arr) cout << i << " ";
        cout << '\n';
    }

    return 0;
}