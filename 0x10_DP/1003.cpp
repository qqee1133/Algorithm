#include <bits/stdc++.h>
using namespace std;
int f[45][2];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        f[0][0] = 1;
        f[0][1] = 0;
        f[1][0] = 0;
        f[1][1] = 1;

        int n;
        cin >> n;

        for(int i=2; i<=n; i++){
            f[i][0] = f[i-2][0] + f[i-1][0];
            f[i][1] = f[i-2][1] + f[i-1][1];
        }

        cout << f[n][0] <<" " << f[n][1] <<"\n";
    }
}