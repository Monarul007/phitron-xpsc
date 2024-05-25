#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    // Write your code here
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        ll A, B;
        cin >> A >> B;
        if(B == 1){
            cout << "NO" << '\n';
        }else{
            cout << "YES" << '\n';
            cout << A << " " << A * B << " " << A * (B + 1) << '\n';
        }
    }

    return 0;
}