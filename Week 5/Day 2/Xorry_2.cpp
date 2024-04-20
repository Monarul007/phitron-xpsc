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

        long long diff = log2(X);
        long long count = 1;
        bool check = false;
        for(int i = diff - 1; i >= 0; i--){
            if (X & 1 << i){
                check = true;
            }else if(check){
                count *= 2;
            }
        }
        cout << count << '\n';
    }

    return 0;
}