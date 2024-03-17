#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Write your code here
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        vector<long long> a(n);
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }

        long long count = 0;
        for(long long i = 0; i < n; i++) {
            if(a[i] > i + 1) {
                count = max(count, a[i] - (i + 1));
            }
        }

        cout << count << endl;
    }
    
    return 0;
}