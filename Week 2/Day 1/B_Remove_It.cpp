#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Write your code here
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N, X;
    cin >> N >> X;

    vector<long long> arr(N);
    for (int i = 0; i < N; i++){
        cin >> arr[i];
    }
    
    arr.erase(remove(arr.begin(), arr.end(), X), arr.end());
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << '\n';

    return 0;
}