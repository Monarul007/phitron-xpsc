#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Write your code here
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;

        vector<string> words(n);
        for(int i=0;i<n;i++){
            cin >> words[i];
        }

        int minTottalDiff = INT_MAX;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int totalDiff = 0;
                for (int k = 0; k < m; k++) {
                    int letterDiff = words[i][k] - words[j][k];
                    if(letterDiff > 0){
                        totalDiff += letterDiff;
                    }else{
                        totalDiff += -letterDiff;
                    }
                }
                minTottalDiff = min(minTottalDiff, totalDiff);
            }
        }

        cout << minTottalDiff << '\n';
    }
    return 0;
}