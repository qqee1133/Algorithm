#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;

    int m, n, x, y;
    while(t--){
        cin>>m>>n>>x>>y;

        int max_num = m / __gcd(m,n) * n;
        bool flag = 0;

        if(x==m) x=0;
        if(y==n) y=0;

        for(int i=x; i<=max_num; i+=m){
            if(i%n==y){
                if(i==0) continue;
                cout << i << "\n";
                flag = 1;
                break;
            }
        }

        if(!flag)
            cout << -1 << "\n";
    }
}   