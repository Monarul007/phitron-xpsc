#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Write your code here
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());
    int q;
    cin >> q;
    while(q--){
        int x;
        cin >> x;
        auto it = upper_bound(v.begin(), v.end(), x);
        cout << it - v.begin() << '\n';
    }

    return 0;
}