#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, m, n, k;
    int x, y;

    cin >> t;

    while(t--){
        int board[52][52];
        int vis[52][52];
        int cnt = 0;

        cin >> m >> n >> k;

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                board[i][j] = 0;
                vis[i][j] = 0;
            }
        }

        for(int i=0; i<k; i++){
            cin >> x >> y;
            board[y][x] = 1;
        }

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                queue<pair<int, int>> q;

                if(board[i][j]==1 && vis[i][j]==0){
                    q.push({i, j});
                    vis[i][j] = 1;
                    cnt++;
                }

                while(!q.empty()){
                    auto cur = q.front();
                    q.pop();

                    for(int dir=0; dir<4; dir++){
                        int nx = cur.X + dx[dir];
                        int ny = cur.Y + dy[dir];

                        if(nx<0 || nx>=n || ny<0 || ny>=m) continue;
                        if(board[nx][ny]==0 || vis[nx][ny]==1) continue;

                        q.push({nx, ny});
                        vis[nx][ny] = 1;

                    }
                }
            }
        }
        cout << cnt << "\n";
    }
}