#include <bits/stdc++.h>
using namespace std;
#define ll long long

void SlidingCost(int N, int K, vector<ll>& arr){
    multiset<int> lwr, upr;
    ll sum1 = 0, sum2 = 0;

    for (int i = 0; i < N; i++) {
        if (i >= K) {
            if (lwr.find(arr[i - K]) != lwr.end()) {
                lwr.erase(lwr.find(arr[i - K]));
                sum1 = sum1 - arr[i - K];
            }
            else {
                upr.erase(upr.find(arr[i - K]));
                sum2 = sum2 - arr[i - K];
            }
        }

        ll sz1 = lwr.size(), sz2 = upr.size();
        if (sz1 <= sz2) {
            lwr.insert(arr[i]);
            sum1 = sum1 + arr[i];
        }
        else {
            upr.insert(arr[i]);
            sum2 = sum2 + arr[i];
        }

        sz1 = lwr.size(), sz2 = upr.size();

        if (sz1 > 0 && sz2 > 0) {
            auto max_lwr = lwr.rbegin();
            auto min_upr = upr.begin();

            if (*max_lwr > *min_upr) {
                sum1 = sum1 + (*min_upr - *max_lwr);
                sum2 = sum2 + (*max_lwr - *min_upr);
                lwr.insert(*min_upr);
                upr.insert(*max_lwr);
                upr.erase(upr.find(*min_upr));
                lwr.erase(lwr.find(*max_lwr));
            }
        }

        if (i >= (K - 1)) {
            ll median = *lwr.rbegin();
            cout << (sz1 * median - sum1)
                        + (sum2 - median * sz2)
                << " ";
        }
    }
}

int main()
{
    int N, K;
    cin >> N >> K;
    vector<ll> arr;

    for (int i = 0; i < N; i++) {
        ll x;
        cin >> x;
        arr.push_back(x);
    }
    SlidingCost(N, K, arr);

    return 0;
}