#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Write your code here
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        
        vector<int> nums(n);
        for (int j = 0; j < n; j++) {
            cin >> nums[j];
        }
        
        sort(nums.begin(), nums.end(), greater<int>());
        for (int num : nums) {
            cout << num << " ";
        }
        cout << '\n';
    }

    return 0;
}