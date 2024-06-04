#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

template <typename T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

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
        
        vector<vector<int>> a(n, vector<int>(2));
        for (int i = 0; i < n; i++) {
            cin >> a[i][0] >> a[i][1];
        }
        
        sort (a.begin(), a.end());
        
        ordered_set<int> st;
        for (int i = 0; i < n; i++) {
            st.insert (a[i][1]);
        }
        
        long long ans = 0;
        
        for (int i = 0; i < n; i++) {
            ans += st.order_of_key(a[i][1]);
            st.erase(a[i][1]);
        }
        
        cout << ans << '\n';
    }

    return 0;
}