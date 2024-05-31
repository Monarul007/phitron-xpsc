#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    // Write your code here
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    ll sum = 0, count = 0;
    map<ll, ll> vis;
    vis[0]++;
    for (ll i = 0; i < n; i++){
        sum += arr[i] % n;
        sum = (sum + n) % n;
        count += vis[sum];
        vis[sum]++;
    }
    cout << count;

    return 0;
}