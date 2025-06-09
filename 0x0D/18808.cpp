#include <bits/stdc++.h>
using namespace std;
int notebook[45][45];
int sticker[15][15];
int n, m, k;
int r, c;

bool fit(int i, int j){
    for(int t=0; t<r; t++){
        for(int q=0; q<c; q++){
            if(notebook[i+t][j+q] == 1 && sticker[t][q] == 1){
                return false;
            }                            
        }
    }

    for(int t=0; t<r; t++){
        for(int q=0; q<c; q++){
            if(sticker[t][q])
                notebook[i+t][j+q] = 1;                          
        }
    }
    return true;
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m >>k;

    while(k--){
        cin >> r >> c;

        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                cin >> sticker[i][j];
            }
        }
        
        
        for(int rot=0; rot<4; rot++){
            if(rot != 0){
                int tmp[15][15];
                for(int i=0; i<r; i++){
                    for(int j=0; j<c; j++){
                        tmp[i][j] = sticker[i][j];
                    }
                }

                for(int i=0; i<c; i++){
                    for(int j=0; j<r; j++){
                        sticker[i][j] = tmp[r-1-j][i];
                    }
                }
                swap(r, c);
            }

            for(int i=0; i<= n-r; i++){
                for(int j=0; j<=m-c; j++){
                    if(fit(i, j)) goto next;
                }
            }
        }
        next:;
    }

    int cnt = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if (notebook[i][j] == 1)
                cnt++;
        }
    }
    cout << cnt;    
}