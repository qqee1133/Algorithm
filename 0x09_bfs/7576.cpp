#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int board[1005][1005];
int day[1005][1005];
int n, m;
queue<pair<int, int>> Q;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> m >> n;

    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            cin >> board[i][j];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            day[i][j] = -1;
            if(board[i][j] == 1){
                day[i][j] = 0;
                Q.push({i, j});
            }
        }
    }

    while(!Q.empty()){
        auto cur = Q.front();
        Q.pop();

        for(int i=0; i<4; i++){
            int nx = cur.X + dx[i];
            int ny = cur.Y + dy[i];

            if(nx<0 || nx>=n || ny<0 || ny>=m) continue;
            if(day[nx][ny] != -1 || board[nx][ny] != 0) continue;

            day[nx][ny] = day[cur.X][cur.Y] + 1;
            Q.push({nx, ny});
        }
    }
    
    int ans = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(board[i][j] == 0 && day[i][j] == -1){
                cout << "-1";
                exit(0);
            }
            ans = max(ans, day[i][j]);
        }
    }

    cout << ans;
}