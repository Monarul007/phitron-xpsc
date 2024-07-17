#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Write your code here
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        
        int zeros = 0;
        bool zeroPluses = false;
        for(int i = 0; i < n; ++i){
            int x;
            cin >> x;
            if(x == 0) {
                zeros++;
            }else if(x >= 2){
                zeroPluses = true;
            }
        }
        if(zeros <= (n + 1) / 2){
            cout << "0" << "\n";
        }else if(zeroPluses || zeros == n){
            cout << "1" << "\n";
        }else{
            cout << "2" << "\n";
        }
    }

    return 0;
}