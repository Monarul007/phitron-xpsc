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
        int N, B;
        cin >> N >> B;

        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }

        int curr = -1;
        for(int i = 0; i < N; i++){
            if((arr[i] & B) == B){
                curr &= arr[i];
            }
        }

        if(curr == B){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}