#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Write your code here
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b, c;
    cin >> a >> b >> c;

    bool possible = false;
    for (int i = 0; i <= c / a; i++) {
        for (int j = 0; j <= c / b; j++) {
            if (i * a + j * b == c) {
                possible = true;
                break;
            }
        }
    }
    if(possible) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}