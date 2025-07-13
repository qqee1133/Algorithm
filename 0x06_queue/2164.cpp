#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    queue<int> Q;
    
    for(int i=1; i<=N; i++)
        Q.push(i);

    int num;
    while(1){
        if(Q.size()==1){
            cout<<Q.front();
            return 0;
        }
        Q.pop();

        num = Q.front();
        Q.pop();

        Q.push(num);
    }
}