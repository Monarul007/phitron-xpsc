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
        int n;
        cin >> n;
        int k = 0;
        while((1 << (k + 1)) <= n - 1){
            k++;
        }
        for (int p = (1 << k) - 1; p >= 0; p--){
            cout << p << " ";
        }
        for (int p = (1 << k); p < n; p++){
            cout << p << " ";
        }
        cout << '\n';
    }

    return 0;
}