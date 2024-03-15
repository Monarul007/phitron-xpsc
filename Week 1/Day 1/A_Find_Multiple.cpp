#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Write your code here
    int A, B, C;
    cin >> A >> B >> C;

    bool isThere = false;
    for(int i = A; i <= B; i++){
        if(i % C == 0){
            cout << i << endl;
            isThere = true;
            break;
        }
    }

    if(!isThere){
        cout << -1 << endl;
    }
    return 0;
}