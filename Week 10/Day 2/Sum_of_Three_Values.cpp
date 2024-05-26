#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Write your code here
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x;
    cin >> n >> x;
    vector<pair<int, int>> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i].first;
        arr[i].second = i + 1;
    }

    sort(arr.begin(), arr.end());
    for(int i = 0; i < n; i++){
        int target = x - arr[i].first;
        int left = i + 1, right = n - 1;
        while (left < right) {
            int sum = arr[left].first + arr[right].first;
            if (sum == target) {
                cout << arr[i].second << " " << arr[left].second << " " << arr[right].second << '\n';
                return 0;
            } else if (sum < target) {
                left++;
            } else {
                right--;
            }
        }
    }
    cout << "IMPOSSIBLE" << '\n';

    return 0;
}