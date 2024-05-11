#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isPossible(vector<int> a, int n, int k) {
    multiset<int> s;
    for (auto i : a) {
        s.insert(i);
    }

    for (int i = 1; i <= k; i++) {
        if (s.empty()) return false;
        int req = k - i + 1;
        auto ii = s.upper_bound(req);
        if (ii == s.begin()) return false;
        ii--;

        s.erase(ii);
        if (!s.empty()) {
            ii = s.begin();
            ll v = (*ii);
            v += (req);
            s.erase(ii);
            s.insert(v);
        }
    }
    return true;
}
int main()
{
    // Write your code here
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int k;
        int left = 0, right = n;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (isPossible(a, n, mid)) {
                k = mid;
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        cout << k << endl;
    }

    return 0;
}