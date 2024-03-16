#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Write your code here
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    string S;
    cin >> S;

    bool found = false;
    for (char c = 'a'; c <= 'z'; c++) {
        if (S.find(c) == -1) {
            cout << c << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "None" << endl;
    }
    
    return 0;
}