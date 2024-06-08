#include <bits/stdc++.h>
using namespace std;

bool vis[21][21];
vector<pair<int, int>> d;
int n = 21, m = 21;
int si = 10, sj = 10;
bool valid(int i, int j){
    if (i < 0 || i >= n || j < 0 || j >= m) return false;
    return true;
}

void bfs(int si, int sj){
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    while (!q.empty()){
        pair<int, int> par = q.front();
        int a = par.first, b = par.second;
        q.pop();
        for (int i = 0; i < d.size(); i++){
            int ci = a + d[i].first;
            int cj = b + d[i].second;
            if (valid(ci, cj) && !vis[ci][cj]){
                q.push({ci, cj});
                vis[ci][cj] = true;
            }
        }
    }
}

int main() {
	// your code goes here
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--){
        string s;
        cin >> s;

        memset(vis, false, sizeof(vis));
        d.clear();
        if (s[0] == '1') d.push_back({0, -1});
        if (s[1] == '1') d.push_back({0, 1});
        if (s[2] == '1') d.push_back({-1, 0});
        if (s[3] == '1') d.push_back({1, 0});

        bfs(si, sj);
        
        int count = 0;
        for(int i = 0; i < 21; i++){
            for (int j = 0; j < 21; j++) {
                if (vis[i][j]) {
                    count++;
                }
            }
        }
        cout << count << '\n';
    }

    return 0;
}