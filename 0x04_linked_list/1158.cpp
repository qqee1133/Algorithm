#include <bits/stdc++.h>
using namespace std;

int prv[5001];
int nxt[5001];

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, K;
    cin >> N >> K;

    for(int i=1; i<=N; i++){
        if(i == 1){
            prv[i] = N;
            nxt[i] = i+1;
            continue;
        }

        if (i == N){
            prv[i] = i-1;
            nxt[i] = 1;
            continue;
        }

        prv[i] = i-1;
        nxt[i] = i+1;
    }

    int cur = 1;
    cout<<"<";
    while(N--){
        for(int i = 1; i < K; i++){
            cur = nxt[cur];
        }

        cout<<cur;
        if(N != 0){
            cout<<", ";
        }

        nxt[prv[cur]] = nxt[cur];
        prv[nxt[cur]] = prv[cur];
        cur = nxt[cur];
    }
    cout<<">";
}