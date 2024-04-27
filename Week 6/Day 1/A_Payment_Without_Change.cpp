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
        ll a, b, n, S;
        cin >> a >> b >> n >> S;

		if (S % n <= b && 1ll * a * n + b >= S) {
			cout << "YES" << '\n';
		}
		else {
			cout << "NO" << '\n';
		}
    }

    return 0;
}