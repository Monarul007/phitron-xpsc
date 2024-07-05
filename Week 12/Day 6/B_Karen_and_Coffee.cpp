#include <bits/stdc++.h>
using namespace std;

#define N 200005
int main()
{
    // Write your code here
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k, q;
    cin >> n >> k >> q;

    vector<int> freq(N);
    while(n--){
        int l, r;
        cin >> l >> r;
        freq[l]++;
        freq[r + 1]--;
    }

    int count = 0;
    for(int i = 0; i < freq.size(); i++){
        count += freq[i];
        freq[i] = (count >= k) ? 1 : 0;
    }

    vector<int> p(N);
    for (int i = 1; i < p.size(); i++) {
        p[i] = freq[i - 1] + p[i - 1];
    }

    while (q--){
        int l, r;
        cin >> l >> r;
        cout << p[r + 1] - p[l] << endl;
    }

    return 0;
}