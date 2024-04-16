#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Write your code here
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long N;
        cin >> N;
        long long x = 1;
        while (2 * x <= N) {
            x *= 2;
        }
        x--;
        cout << x << '\n';
    }

    return 0;
}