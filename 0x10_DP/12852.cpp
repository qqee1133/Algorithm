#include <bits/stdc++.h>
using namespace std;
int d[1000005];
int pre[1000005];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    d[1] = 0;

    for(int i=2; i<=n; i++){
        int num1 = 1e6+1;
        int num2 = 1e6+1;
        int num3;

        num3 = d[i-1] + 1;

        if(i%3 == 0){
            num1 = d[i/3] + 1;
        }

        if(i%2 == 0){
            num2 = d[i/2] + 1;
        }

        d[i] = min({num1, num2, num3});

        if(d[i] == num1) pre[i] = i/3;
        else if(d[i] == num2) pre[i] = i/2;
        else pre[i] = i-1;
    }

    cout << d[n] <<"\n";
    
    int idx = n;

    cout << n << " ";
    while(idx != 1){
        cout << pre[idx] << " ";
        idx = pre[idx];
    }
}