#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    // Write your code here
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll l, r;
    cin >> l >> r;

    cout << "YES" << '\n';
    for (ll i = 0; i <= (r - l) / 2; i++){
        cout << (l + i * 2) << ' ' << (l + i * 2 + 1) << '\n';
    }

    return 0;
}