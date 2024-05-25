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
    while (t--){
        ll A, B, X = 0;
        cin >> A >> B;
        while (X != 1){
            X = __gcd(A, B);
            B /= X;
            if (B == 1) break;
        }
        cout << (B == 1 ? "Yes" : "No") << '\n';
    }

    return 0;
}