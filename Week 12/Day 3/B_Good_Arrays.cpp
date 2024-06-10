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
        
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        
        ll sum = 0, count = 0;
        for (int x: v) {
            sum += x;
            if (x == 1) count++;
        }
        
        if (sum >= count + n && n > 1) {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }

    return 0;
}