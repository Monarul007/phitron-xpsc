#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Write your code here
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int x, y;
    cin >> x >> y;
    
    if (x == y) {
        cout << "=" << '\n';
        return 0;
    }
    
    if (x == 1) {
        cout << "<" << '\n';
        return 0;
    }
    
    if (y == 1) {
        cout << ">" << '\n';
        return 0;
    }
    
    if (x + y == 6) {
        cout << "=" << '\n';
        return 0;
    }
    
    if (x == 3) {
        cout << ">" << '\n';
        return 0;
    }
    
    if (y == 3) {
        cout << "<" << '\n';
        return 0;
    }
    
    if (x < y) {
        cout << ">" << '\n';
    } else {
        cout << "<" << '\n';
    }

    return 0;
}