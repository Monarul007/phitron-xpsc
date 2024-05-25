#include <bits/stdc++.h>
using namespace std;

int min_divisor(int n) {
    for (int d = 2; d <= round(sqrt(n)) + 1; d++) {
        if (n % d == 0) {
            return d;
        }
    }
    return n;
}

int main()
{
    // Write your code here
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int l, r;
        cin >> l >> r;
        bool found = false;
        for (int x = l; x <= r; x++) {
            int md = min_divisor(x);
            if (md != x) {
                cout << md << " " << x - md << endl;
                found = true;
                break;
            }
        }
        if (!found) {
            cout << -1 << endl;
        }
    }

    return 0;
}