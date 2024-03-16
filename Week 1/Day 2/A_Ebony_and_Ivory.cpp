#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Write your code here
    int a, b, c;
    cin >> a >> b >> c;

    bool possible = false;
    for (int i = 0; i <= a; i++) {
        for (int j = 0; j <= b; j++) {
            int damage = i * a + j * b;
            if (damage == c) {
                possible = true;
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