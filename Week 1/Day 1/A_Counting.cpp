#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Write your code here
    int A, B;
    cin >> A >> B;
    
    if(A > B)
    {
        cout << 0 << endl;
    }else{
        cout << B - A + 1 << endl;
    }
    return 0;
}