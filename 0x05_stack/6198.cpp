#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, h;
    stack<int> building;
    stack<int> s;

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> h;
        s.push(h);
    }

    while(!s.empty()){
        building.push(s.top());
        s.pop();
    }
    s.push(building.top());
    building.pop();

    long long ans = 0;

    while(!building.empty()){
        while(!s.empty()){
            if(building.top() >= s.top()) {
                s.pop();
            }
            else{
                break;
            }
        }
        s.push(building.top());
        building.pop();
        ans += (s.size()-1);
    }

    cout << ans;
}