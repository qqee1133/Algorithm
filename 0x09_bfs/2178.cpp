#include <bits/stdc++.h>
using namespace std;

int n, m;
int board[105][105];
int dist[105][105];
bool vis[105][105];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

void bfs(){
    queue<pair<int, int>> q;
    q.push({0, 0});
    vis[0][0] = true;
    dist[0][0] = 1;

    while(!q.empty()){
        pair<int, int> cur = q.front();
        q.pop();
        
        for(int dir=0; dir<4; dir++){
            int nx = cur.first + dx[dir];
            int ny = cur.second + dy[dir];

            if(nx >= n || nx < 0 || ny >= m || ny < 0) continue;
            if(vis[nx][ny] == 1 || board[nx][ny] == 0) continue;

            q.push({nx, ny});
            vis[nx][ny] = true;
            dist[nx][ny] = dist[cur.first][cur.second] + 1;
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    char ch;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> ch;
            if(ch=='0')
                board[i][j] = 0;
            else
                board[i][j] = 1;
        }
    }

    bfs();
    cout<<dist[n-1][m-1];
}