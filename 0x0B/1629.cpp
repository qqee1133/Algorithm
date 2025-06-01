#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll func(ll a, ll b, ll c){
    if(b==1) return a % c;
    
    if(b % 2 == 1)
        return (func(a, b-1, c) % c) * (a % c);
    else
        return (func(a, b/2, c) % c)* (func(a, b/2, c) % c);
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll a, b, c;
    cin >> a >> b >> c;

    cout << func(a, b, c) % c;   
} 