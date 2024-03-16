#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Write your code here
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int A, B, T;
    cin >> A >> B >> T;

    T = T + 0.5;
    cout << (T / A) * B << endl;
    
    return 0;
}