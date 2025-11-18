#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int arr[10001];
int k, n;

bool solve(ll x){
    ll cur = 0;
    for(int i=0; i<k; i++) cur += arr[i] / x;
    return cur >= n;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> k >> n;

    for(int i=0; i<k; i++)
        cin >> arr[i];

    ll st = 1;
    ll ed = 0x7fffffff;
    while(st < ed){
        ll mid = (st + ed + 1) / 2;
        if(solve(mid)) st = mid;
        else ed = mid - 1;
    }
    cout << st;
}