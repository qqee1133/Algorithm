#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

char board[102][102];
int vis[102][102];
int vis2[102][102];
queue <pair<int, int>> q;
queue <pair<int, int>> q2;
int ans1, ans2;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            cin >> board[i][j];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(vis[i][j]==1) continue;

            vis[i][j] = 1;
            ans1++;
            q.push({i, j});

            while(!q.empty()){
                auto cur = q.front();
                q.pop();
                char ch = board[cur.X][cur.Y];
                
                for(int dir=0; dir<4; dir++){
                    int nx = cur.X + dx[dir];
                    int ny = cur.Y + dy[dir];

                    if(nx<0 || nx>=n || ny<0 || ny>=n) continue;
                    if(ch!=board[nx][ny] || vis[nx][ny]) continue;

                    vis[nx][ny] = 1;
                    q.push({nx, ny});
                }
            }
        }
    }


    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(board[i][j]=='G') board[i][j] = 'R';
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(vis2[i][j]==1) continue;

            vis2[i][j] = 1;
            ans2++;
            q2.push({i, j});

            while(!q2.empty()){
                auto cur = q2.front();
                q2.pop();
                char ch = board[cur.X][cur.Y];
                
                for(int dir=0; dir<4; dir++){
                    int nx = cur.X + dx[dir];
                    int ny = cur.Y + dy[dir];

                    if(nx<0 || nx>=n || ny<0 || ny>=n) continue;
                    if(ch!=board[nx][ny] || vis2[nx][ny]) continue;

                    vis2[nx][ny] = 1;
                    q2.push({nx, ny});
                }
            }
        }
    }

    cout << ans1 << " " << ans2;
}