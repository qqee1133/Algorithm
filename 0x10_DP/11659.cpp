#include <bits/stdc++.h>
using namespace std;
int d[100005];
int arr[100005];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    for(int i=1; i<=n; i++)
        cin >> arr[i];

    d[0] = 0;
    d[1] = arr[1];

    for(int i=2; i<=n; i++)
        d[i] = d[i-1] + arr[i];

    int a, b;
    while(m--){
        cin >> a >> b;
        cout << d[b] - d[a-1] <<"\n";
    }
}