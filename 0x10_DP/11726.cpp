#include <bits/stdc++.h>
using namespace std;
int d[1005];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    d[1] = 1;
    d[2] = 2;

    if(n==1 || n==2){
        cout << n;
        return 0;
    }

    for(int i=3; i<=n; i++){
        d[i] = (d[i-1] % 10007 + d[i-2] % 10007) % 10007;
    }
    cout << d[n];
}