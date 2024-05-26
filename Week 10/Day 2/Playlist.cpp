#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Write your code here
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> songs(n);
    for (int i = 0; i < n; ++i) {
        cin >> songs[i];
    }

    set<int> uniqueSongs;
    int maxLength = 0, left = 0;
    for(int right = 0; right < n; ++right){
        while (uniqueSongs.count(songs[right])) {
            uniqueSongs.erase(songs[left]);
            left++;
        }
        uniqueSongs.insert(songs[right]);
        maxLength = max(maxLength, right - left + 1);
    }
    cout << maxLength << '\n';

    return 0;
}