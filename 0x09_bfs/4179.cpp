#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

char board[1002][1002];
int dist1[1002][1002];
int dist2[1002][1002];

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

queue<pair<int, int>> person;
queue<pair<int, int>> fire;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int r, c;
    cin >> r >> c;

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            dist1[i][j] = -1;
            dist2[i][j] = -1;
        }
    }

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin >> board[i][j];

            if(board[i][j] == 'F'){
                fire.push({i, j});
                dist1[i][j] = 0;
            }

            if(board[i][j] == 'J'){
                person.push({i, j});
                dist2[i][j] = 0;
            }
        }
    }

    while(!fire.empty()){
        pair<int, int> cur = fire.front();
        fire.pop();


        for(int dir=0; dir<4; dir++){
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];

            if(nx<0 || nx>=r || ny<0 || ny>=c) continue;
            if(dist1[nx][ny]>=0 || board[nx][ny]=='#') continue;


            dist1[nx][ny] = dist1[cur.X][cur.Y] + 1;
            fire.push({nx, ny});
        }
    }

    while(!person.empty()){
        pair<int, int> cur = person.front();
        person.pop();

        for(int dir=0; dir<4; dir++){
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];

            if(nx<0 || nx>=r || ny<0 || ny>=c){                
                cout << dist2[cur.X][cur.Y] + 1;
                return 0;
            }
            if(dist2[nx][ny]>=0 || board[nx][ny]=='#') continue;
            if(dist2[cur.X][cur.Y]+1>=dist1[nx][ny] && dist1[nx][ny]!=-1) continue;    

            dist2[nx][ny] = dist2[cur.X][cur.Y] + 1;
            person.push({nx, ny});
        }
    }
    cout << "IMPOSSIBLE";
}