#include <bits/stdc++.h>
using namespace std;

bool bit_set(int set, int bit){
    return (((set >> bit) & 1) == 1);
}

int main()
{
    // Write your code here
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    bool ok = false;
    for(int i = 0; i < (1 << n); i++){
        int sum = 0;
        for(int j = 0; j < n; j++){
            if(bit_set(i, j)){
                sum += v[j];
            }else{
                sum -= v[j];
            }
        }
        sum = ((sum%360) + 360)%360;
        if(sum == 0){
            ok = true;
        }
    }

    if(ok){
        cout << "YES" << '\n';
    }else {
        cout << "NO" << '\n';
    }

    return 0;
}