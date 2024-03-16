#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Write your code here
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    long long int X, Y;
    cin >> X >> Y;

    long long int start = X;

    long long int ans = 1;
    while (start * 2 <= Y) {
        start *= 2;
        ans++;
    }

    cout << ans << endl;
    
    return 0;
}