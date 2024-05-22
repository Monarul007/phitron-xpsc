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
        bool isOkay = true;
        for (int i = 1; i <= n; i++) {
            int x; cin >> x;
            bool isFound = false;
            for (int j = i + 1; j >= 2; j--) {
                if (x % j) {
                    isFound = true;
                    break;
                }
            }
            isOkay &= isFound;
        }
        if (isOkay){
            cout << "YES" << "\n";
        }else{
            cout << "NO" << "\n";
        }
    }

    return 0;
}