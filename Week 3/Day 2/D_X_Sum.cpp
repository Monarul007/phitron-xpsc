#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Write your code here
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;

        int a[n][m];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> a[i][j];
            }
        }

        int maxSum = 0;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++){
                int nowSum = a[i][j];
                int k = 1;
                while(i - k >= 0 && j + k < m){
                    nowSum += a[i - k][j + k];
                    k++;
                }
                k = 1;
                while(i + k < n && j + k < m){
                    nowSum += a[i + k][j + k];
                    k++;
                }
                k = 1;
                while(i + k < n && j - k >= 0){
                    nowSum += a[i + k][j - k];
                    k++;
                }
                k = 1;
                while(i - k >= 0 && j - k >= 0){
                    nowSum += a[i - k][j - k];
                    k++;
                }

                maxSum = max(maxSum, nowSum);
            }
        }
        cout << maxSum << endl;
    }

    return 0;
}