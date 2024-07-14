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
        int n;
        cin >> n;
        vector<ll> a(n), b(n + 1);
        for (auto& x : a){
            cin >> x;
        }
        for (auto& x : b){
            cin >> x;
        }
        ll sum = 0, ext = 1e18;
        for (int i = 0; i < n; i++){
            sum += abs(a[i] - b[i]);
            ext = min(ext, abs(a[i] - b[n]));
            ext = min(ext, abs(b[i] - b[n]));
            if (min(a[i], b[i]) <= b[n] && b[n] <= max(a[i], b[i])){
                ext = 0;
            }
        }
        cout << sum + ext + 1 << '\n';
    }

    return 0;
}