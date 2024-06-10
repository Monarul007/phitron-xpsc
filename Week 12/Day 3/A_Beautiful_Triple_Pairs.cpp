#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct hash_tuple {
    template <class T1, class T2, class T3>
    size_t operator() (const tuple<T1, T2, T3> &t) const {
        auto h1 = hash<T1>()(get<0>(t));
        auto h2 = hash<T2>()(get<1>(t));
        auto h3 = hash<T3>()(get<2>(t));
        return h1 ^ (h2 << 1) ^ (h3 << 2); // Combine the hash values
    }
};

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

        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        unordered_map<tuple<int, int, int>, int, hash_tuple> cnt;
        int ans = 0;
        for (int i = 0; i < n - 2; i++) {
            tuple<int, int, int> triplet = {a[i], a[i + 1], a[i + 2]};
            vector<tuple<int, int, int>> mist(3);
            mist[0] = {0, a[i + 1], a[i + 2]};
            mist[1] = {a[i], 0, a[i + 2]};
            mist[2] = {a[i], a[i + 1], 0};
            for (auto trip : mist) {
                ans += cnt.count(trip) ? cnt[trip] : 0;
                ans -= cnt.count(triplet) ? cnt[triplet] : 0;
                cnt[trip]++;
            }
            cnt[triplet]++;
        }
        cout << ans << '\n';
    }

    return 0;
}