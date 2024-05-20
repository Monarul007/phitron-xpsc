#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool is_prime(long long n) {
    if (n % 2 == 0 && n > 2) return false;
    for (int i = 3; i * i <= n; i += 2){
        if (n % i == 0) return false;
    }
    return true;
}

int main()
{
    // Write your code here
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    if (is_prime(n)){
        cout << "1" << '\n';
    }else if(n % 2 == 0){
        cout << "2" << '\n';
    }else{
        if (is_prime(n - 2)){
            cout << "2" << '\n';
        }else{
            cout << "3" << '\n';
        }
    }

    return 0;
}