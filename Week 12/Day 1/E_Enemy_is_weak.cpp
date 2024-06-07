#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

int main()
{
    // Write your code here
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    ordered_set l, r;
    for (int i = 0; i < n; ++i) {
        r.insert(a[i]);
    }

    long long ans = 0;
    for (int j = 0; j < n; ++j) {
        r.erase(a[j]);
        int lcount = l.order_of_key(a[j]);
        int rcount = r.size() - r.order_of_key(a[j] + 1);
        ans += (long long)lcount * rcount;
        l.insert(a[j]);
    }
    cout << ans << "\n";

    return 0;
}