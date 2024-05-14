#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Write your code here
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        cout << (i & 2 ? 'b' : 'a');
    }
    cout << '\n';

    return 0;
}