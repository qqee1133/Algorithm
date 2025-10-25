#include <bits/stdc++.h>
using namespace std;

int f(int num){
    if (num==0) return 1;

    return num * f(num-1);
}

int n, k;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> k;

    cout << f(n) / (f(k) * f(n-k));
}