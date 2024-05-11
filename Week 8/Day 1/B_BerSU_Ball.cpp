#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Write your code here
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> boys(n);
    for (int i = 0; i < n; i++) {
        cin >> boys[i];
    }
    int m;
    cin >> m;
    vector<int> girls(m);
    for (int i = 0; i < m; i++) {
        cin >> girls[i];
    }
    sort(boys.begin(), boys.end());
    sort(girls.begin(), girls.end());
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if ((boys[i] == girls[j]) || (boys[i] + 1 == girls[j]) || (boys[i] == girls[j] + 1)) {
                count += 1;
                girls[j] = -7;
                break;
            }
        }
    }
    cout << count << "\n";

    return 0;
}