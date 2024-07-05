#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#define ll long long
typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

const ll MAXN = 1e6 + 5;
ll N;
ll A[MAXN];

int main()
{
    // Write your code here
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N;
    for (ll i = 0; i < N; i++) {
        cin >> A[i];
    }
    ordered_set leftset;
    ordered_set rightset;
    for(ll i = 1; i < N; i++) {
        rightset.insert(A[i]);
    }
    ll ans = 0;
    for(ll i = 0; i < N; i++){
        ll leftCount = leftset.size() - leftset.order_of_key(A[i] + 1);
        ll rightCount = rightset.order_of_key(A[i]);
        ans += leftCount * rightCount;
        leftset.insert(A[i]);
        rightset.erase(A[i + 1]);
    }
    cout << ans << '\n';

    return 0;
}