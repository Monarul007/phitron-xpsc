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
    while (t--){
        int a, b;
        cin >> a >> b;
        if (a > b){
            swap(a, b);
        }

        if(a * 2 >= b && (a + b) % 3 == 0){
            cout << "YES" << '\n';
        }else{
            cout << "NO" << '\n';
        }
    }

    return 0;
}