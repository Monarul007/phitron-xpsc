#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    // Write your code here
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    ll left = 0, right = 1e18, ans = 1e18;
    while(left <= right){
        ll mid = (left + right) / 2;
        ll prod = 0;
        for(int i = 0; i < n; i++){
            prod += min(mid/arr[i], (ll)1e9);
        }
        if(prod >= m){
            if(mid < ans) ans = mid;
            right = mid - 1;
        }else{
            left = mid + 1;
        }
    }
    cout << ans << '\n';

    return 0;
}