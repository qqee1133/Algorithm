#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;

    int dist[100001];
    fill(dist, dist+100001, 100000);

    queue<int> Q;

    dist[n] = 0;
    Q.push(n);

    while(!Q.empty()){
        int cur = Q.front();
        //cout << cur<<"\n";
        Q.pop();

        if(cur*2 <= 100000){
            if(dist[cur*2] > dist[cur]){
                dist[cur*2] = dist[cur];
                Q.push(cur*2);
            }
        }

        if((cur-1 >= 0) && (dist[cur-1] > dist[cur] + 1)){
            dist[cur-1] = dist[cur] + 1;
            Q.push(cur-1);
        }

        if((cur+1 <= 100000) && (dist[cur+1] > dist[cur] + 1)){
            dist[cur+1] = dist[cur] + 1;
            Q.push(cur+1);
        }
    }
    cout << dist[k]<<"\n";
}
