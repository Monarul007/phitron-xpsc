#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Write your code here
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        map<string, int> freq;
        vector<string> words[3];

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < n; j++) {
                string word;
                cin >> word;
                words[i].push_back(word);
                freq[word]++;
            }
        }

        int points[3] = {0};
        for (int i = 0; i < 3; i++){
            for (auto word : words[i]) {
                if (freq[word] == 1) {
                    points[i] += 3;
                } else if (freq[word] == 2) {
                    points[i] += 1;
                }
            }
        }

        for (int i = 0; i < 3; i++) {
            cout << points[i] << " ";
        }
        cout << endl;
    }
    
    return 0;
}