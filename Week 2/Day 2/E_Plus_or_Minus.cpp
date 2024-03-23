#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Write your code here
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;

    while(T--){
        int a, b, c;
        cin >> a >> b >> c;

        if((a + b) == c){
            cout << "+" << '\n';
        }else{
            if((a - b) == c){
                cout << "-" << '\n';
            }
        }
    }
    return 0;
}