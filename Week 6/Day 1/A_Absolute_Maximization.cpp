#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Write your code here
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        int minA = INT_MAX;
        int maxA = 0;
        for(int i = 0; i < n; i++){
            int a;
            cin >> a;

            maxA |= a;
            minA &= a;
        }
        cout << maxA - minA << '\n';
    }

    return 0;
}