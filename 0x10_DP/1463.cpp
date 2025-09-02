#include <bits/stdc++.h>
using namespace std;
int d[1000001];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    d[1] = 0;
    for(int i=2; i<=n; i++){
        int num1= 1000001;
        int num2 = 1000001;
        int num3;
    
        if(i%3 == 0) num1 = d[i/3] + 1;
        if(i%2 == 0) num2 = d[i/2] + 1;
        num3 = d[i-1] + 1;
        d[i] = min({num1, num2, num3});
    }
    cout << d[n];
}