#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 100010;
int a[N];
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

        bool isOne = false;
        for(int i = 1; i <= n; i++) {
            cin >> a[i];
            if (a[i] == 1) {
                isOne = true;
            }
        }

        if(isOne){
            cout << "Yes" << "\n";
        } else{
            sort(a + 1, a + n + 1);
            vector<int> b;
            for(int i = 2; i <= n; i++){
                if(a[i] % a[1] != 0){
                    b.push_back(a[i]);
                }
            }

            sort(b.begin(), b.end());
            bool isDvisible = true;
            int m = b.size();
            for(int i = 1; i < m; i++){
                if(b[i] % b[0] != 0){
                    isDvisible = false;
                    break;
                }
            }

            if(isDvisible){
                cout << "Yes\n";
            }else{
                cout << "No\n";
            }
        }
    }

    return 0;
}