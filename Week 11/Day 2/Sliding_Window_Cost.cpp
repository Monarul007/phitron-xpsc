#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

template <typename T> 
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    pbds<pair<int, int>> p;
    vector<long long> result;

    for (int i = 0; i < k; i++) {
        p.insert({a[i], i});
    }

    for (int i = 0; i <= n - k; i++) {
        if (i > 0) {
            p.erase(p.find_by_order(p.order_of_key({a[i - 1], i - 1})));
            p.insert({a[i + k - 1], i + k - 1});
        }

        auto it = p.find_by_order((k - 1) / 2);
        int median = it->first;
        long long cost = 0;

        for (int j = 0; j < k; j++) {
            cost += abs(a[i + j] - median);
        }
        result.push_back(cost);
    }

    for (long long c : result) {
        cout << c << " ";
    }
    cout << "\n";

    return 0;
}