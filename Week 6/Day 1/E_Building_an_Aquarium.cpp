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
        ll n, x;
        cin >> n >> x;

        vector<ll> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }

        // sort(v.begin(), v.end());
        ll l = 1, r = 1e10;
        while(l < r-1){
            ll totalWater = 0;
            ll mid = l + (r - l) / 2;
            for(int i = 0; i < n; i++){
                if(v[i] < mid){
                    totalWater += (mid - v[i]);
                }
            }

            if(totalWater > x){
                r = mid;
            }else{
                l = mid;
            }
        }
        cout << l << '\n';
    }

    return 0;
}