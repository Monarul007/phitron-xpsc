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
        ll n, i, x, y;
        cin >> n ;
        vector<ll> v;
        ll arr[n];
        for(i = 0; i < n; i++){
            cin >> arr[i];
            v.push_back(arr[i]);
        }
        sort(v.begin(), v.end());

        ll c = 0, sum = 0;
        for(i = 0; i < n; i++){
            if(arr[i] == *(v.rbegin())){
                x = v.size();
                sum = sum + (x-1);
                v.pop_back();
                continue;
            }
            x = lower_bound(v.begin(), v.end(), arr[i]+1) - v.begin();
            sum += (x-1);
            v.erase(v.begin() + x-1 );
        }
        cout << sum << "\n";
    }

    return 0;
}