#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Write your code here
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    map<int, int> d;
    for (int i = 1;i <= n;i++) {
        int l, r;
        cin >> l >> r;
        d[l]++;
        d[r + 1]--;
    }

    int sum = 0;
    bool ok = true;
    for (auto val : d) {
        sum += val.second;
        if (sum > 2) {
            ok = false;
            break;
        }
    }

    if (ok) {
        cout << "YES" << '\n';
    }else {
        cout << "NO" << '\n';
    }

    return 0;
}