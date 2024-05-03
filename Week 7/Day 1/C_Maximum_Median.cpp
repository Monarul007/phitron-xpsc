#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool can(vector<int> arr, ll n, ll k, ll mid){
    ll need = 0;
    for(int i = n/2; i < n; i++){
        if( mid > arr[i]) need += abs(arr[i] - mid);
        if(need> k) return false;
    }
    return need <= k;
}

int main()
{
    // Write your code here
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    vector<int> arr(n, 0);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());

    ll left = 1, right = 1e18, ans = 0, mid = 0;
    while (left <= right) {
        mid = (left + right) / 2;
        if (can(arr, n, k, mid)) {
            left = mid + 1;
            ans = mid;
        } else {
            right = mid - 1;
        }
    }

    cout << ans << '\n';

    return 0;
}