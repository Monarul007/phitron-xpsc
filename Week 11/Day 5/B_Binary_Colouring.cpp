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
        ll x;
        cin >> x;
        vector<int> v(31, 0);
        for(int i = 0; i < 30; i++){
            if (1ll & (x >> i)) {
                if (v[i]) {
                    v[i + 1] = 1;
                    v[i] = 0;
                } else if (i > 0) {
                    if (v[i - 1] == 1) {
                        v[i + 1] = 1;
                        v[i - 1] = -1;
                    } else {
                        v[i] = 1;
                    }
                } else if (i == 0) {
                    v[i] = 1;
                }
            }
        }
        cout << 31 << '\n';
        for (int i = 0; i <= 30; i++) {
            cout << v[i] << ' ';
        }
        cout << '\n';
    }

    return 0;
}