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
        ll n;
        cin >> n;

        string s;
        cin >> s;
        
        vector<ll> diffs;
        ll maxSum = 0;
        ll minChange = 0;
        for(ll i = 0; i < n; i++){
            ll left = i;
            ll right = n - i - 1;
            if(s[i] == 'L'){
                if(right > left){
                    minChange++;
                    maxSum += right;
                    diffs.push_back(right - left);
                }else{
                    maxSum += left;
                }
            }else{
                if(left > right){
                    minChange++;
                    maxSum += left;
                    diffs.push_back(left - right);
                }else{
                    maxSum += right;
                }
            }
        }

        // for(int i = 0; i < diffs.size(); i++){
        //     cout << diffs[i] << " ";
        // }
        // cout << '\n';

        vector<ll> ans(n+1);
        for(ll i = minChange; i <= n; i++){
            ans[i] = maxSum;
        }

        sort(diffs.begin(), diffs.end(), greater<ll>());

        for(ll i = minChange - 1; i >= 1; i--){
            maxSum -= diffs.back();
            diffs.pop_back();
            ans[i] = maxSum;
        }
        
        for(ll i = 1; i <= n; i++){
            cout << ans[i] << " ";
        }
        cout << '\n';
    }

    return 0;
}