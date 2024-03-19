#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Write your code here
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N;
    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++){
        cin >> A[i];
    }

    int K;
    cin >> K;

    int i = 0, j = 0;
    queue<int> q;

    vector<long long> ans;
    while (j < N){
        if (A[j] < 0){
            q.push(A[j]);
        }
        if (j >= K - 1){
            if (q.size()){
                ans.push_back(q.front());
            }else{
                ans.push_back(0);
            }
            if (A[i] < 0){
                q.pop();
            }
            i++;
        }
        j++;
    }

    for(auto i : ans){
        cout << i << " ";
    }
    return 0;
}