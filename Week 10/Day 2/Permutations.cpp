#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Write your code here
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    if (n == 2 || n == 3) {
        cout << "NO SOLUTION" << '\n';
        return 0;
    }

    vector<int> perms;
    for(int i = 2; i <= n; i += 2){
        perms.push_back(i);
    }
    for(int i = 1; i <= n; i += 2){
        perms.push_back(i);
    }

    for(int num : perms){
        cout << num << " ";
    }
    cout << '\n';

    return 0;
}