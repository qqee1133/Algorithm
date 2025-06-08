#include <bits/stdc++.h>
using namespace std;

int n, m;
int ans[10];

void func(int cnt, int prev){
    if(cnt==m){
        for(int i=0; i<m; i++)
            cout << ans[i] << " ";
        cout<<"\n";
        return;
    }

    for(int i=prev; i<=n; i++){
        ans[cnt] = i;
        func(cnt+1, ans[cnt]);            
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    func(0, 1);
}