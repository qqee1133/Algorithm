#include <bits/stdc++.h>
using namespace std;

#define x first
#define y second

int n;

bool cmp(const pair<int, int> &a, const pair<int, int> &b){
    if(a.y < b.y) return a.y < b.y;
    if(a.y == b.y) return a.x < b.x;
    return false;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >>n;
    vector<pair<int, int>> v;

    int a, b;
    for(int i=0; i<n; i++){
        cin >> a >> b;
        v.push_back({a, b});
    }

    sort(v.begin(), v.end(), cmp);

    int cnt=0;
    int i=0;
    for(auto j : v){
        if (j.x>=i){
            cnt++;
            i=j.y;
        }
    }
    
    cout << cnt;
}