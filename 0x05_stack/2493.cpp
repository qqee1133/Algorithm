#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;

    stack<pair<int, int>> s;
    s.push(make_pair(100000001, 0));
    
    int height;
    for(int i=1; i<=n; i++){
        cin >> height;

        while(height > s.top().X){
            s.pop();
        }
        cout << s.top().Y << " ";
        s.push(make_pair(height, i));
    }
}