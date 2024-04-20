#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Write your code here
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--){
        int X;
        cin >> X;

        // pair<int, int> p;
        int A = 0, B = 0, bitPos = 0;
        while((1 << bitPos) <= X){
            bitPos++;
        }
        int mostSignificantBit = 1 << (bitPos - 1);
        A = mostSignificantBit;
        B = A ^ X;

        cout << B << " " << A << endl;
    }

    return 0;
}