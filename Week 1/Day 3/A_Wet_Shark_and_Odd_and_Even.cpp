#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Write your code here
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    long long sum = 0;
    for (int i = 0; i < n; i++){
        if (arr[i] > 0){
            sum += arr[i];
        }
    }
    
    if (sum % 2 == 0){
        cout << sum << endl;
    }else{
        sort(arr.begin(), arr.end());
        for(int i = 0; i < n; i++){
            if (arr[i] % 2 != 0){
                sum -= arr[i];
                break;
            }
        }
        cout << sum << endl;
    }

    return 0;
}