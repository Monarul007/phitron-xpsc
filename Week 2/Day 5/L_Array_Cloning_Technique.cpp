#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Write your code here
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        map<int, int> m;
        int count = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            m[x]++;
            count = max(count, m[x]);
        }
        
        int ans = 0;
        while (count < n) {
            int diff = count < n - count ? count : n - count;
            ans += 1 + diff;
            count *= 2;
        }
        
        cout << ans << '\n';
    }
    
    return 0;
}