#include <bits/stdc++.h>
using namespace std;
int t[20];
int p[20];
int money[20];
int n;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    for(int i=1; i<=n; i++){
        cin >> t[i] >> p[i];
    }

    for(int i=1; i<=n; i++){
        money[i] = max(money[i], money[i-1]);
        if(i+t[i] <= n+1)
            money[i+t[i]] = max(money[i+t[i]], money[i]+p[i]);
    }

    cout << max(money[n], money[n+1]);
}