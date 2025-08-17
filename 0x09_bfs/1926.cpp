#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int board[502][502];
bool vis[502][502];

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    for(int i=0; i<n; i++){
        for(int k=0; k<m; k++){
            cin >> board[i][k];
        }
    }

    int num_paints=0;
    int widest=0;
    int count=0;

    for(int i=0; i<n; i++){ 
        for(int k=0; k<m; k++){
            if(board[i][k]==0 || vis[i][k]==1)
                continue;
            else{
                num_paints++;
                vis[i][k] = 1;
                queue<pair<int, int>> Q;
                Q.push({i, k});

                count=0;
                while(Q.empty() != 1){
                    pair<int,int> cur = Q.front();
                    Q.pop();
                    count++;

                    for(int j=0; j<4; j++){
                        int nx = dx[j] + cur.X;
                        int ny = dy[j] + cur.Y;

                        if(nx < 0 || nx >= n || ny < 0 || ny >= m)
                            continue;
                        if(board[nx][ny] != 1 || vis[nx][ny] == 1)
                            continue;
                        
                        vis[nx][ny] = 1;
                        Q.push({nx, ny});
                    }
                }
                if(count>widest)
                    widest = count;
            }
        }
    }
    cout<<num_paints<<"\n"<<widest;
}
