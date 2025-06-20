#include <bits/stdc++.h>
using namespace std;

int t, n, m;
int a[20005];
int b[20005];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> t;

    while(t--){
        cin >> n >> m;

        for(int i=0; i<n; i++)  cin >> a[i];
        for(int i=0; i<m; i++)  cin >> b[i];

        sort(a, a+n);
        sort(b, b+m);

        int tot=0;
        int idx=0;
        for(int i=0; i<n; i++){
            for(int j=idx; j<m; j++){
                if(a[i] <= b[j]){
                    idx = j;
                    tot += idx;
                    break;
                }
                else if(j==m-1 && a[i] > b[j]){
                    tot += j+1;
                }
            }
        }
        cout << tot << "\n";
    }
}