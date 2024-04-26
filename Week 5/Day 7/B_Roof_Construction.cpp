#include <bits/stdc++.h>
using namespace std;

int msb(int n){
    return (int)log2(n);
}
int main()
{
    // Write your code here
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        
        if(n == 2){
            cout << "0 1" << "\n";
            continue;
        }

        int now = n - 1;
        while(now > 1){
            cout << now << " ";
            if(msb(now - 1) != msb(now)){
                break;
            }
            now--;
        }
        for(int i = 0; i <= now - 1; i++){
            cout << i << " ";
        }
        cout << "\n";
    }

    return 0;
}