#include <bits/stdc++.h>
using namespace std;
int d[11];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    d[1] = 1;
    for(int i=1; i<11; i++){
        if(i>=4) d[i] = d[i-3] + d[i-2] + d[i-1];
        else if(i==3) d[i] = d[i-2] + d[i-1] + 1;
        else if(i==2) d[i] = d[i-1] + 1;
    }

    int n;
    while(t--){
        cin >> n;
        cout << d[n] << "\n";
    }

}