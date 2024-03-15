#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Write your code here
    int A, B;
    cin >> A >> B;

    int theMax = max(A, B);
    int sumMaxTwice = theMax + theMax - 1;
    int sum = A + B;

    cout << max(sum, sumMaxTwice) << endl;
    return 0;
}