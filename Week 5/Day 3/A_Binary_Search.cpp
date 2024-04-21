#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Write your code here
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(auto &x : a) cin >> x;
    while(k--){
        int q;
        cin >> q;
        auto it = lower_bound(a.begin(), a.end(), q);
        if(it != a.end() && *it == q) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}