#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, num;
    stack<int> s;
    stack<int> tmp;
    stack<int> ans;

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> num;
        s.push(num);
    }
    
    int cur;
    while(!s.empty()){
        cur = s.top();
        s.pop();

        if(tmp.empty()){
            ans.push(-1);
            tmp.push(cur);
            continue;
        }

        while(!tmp.empty()){
            if(cur < tmp.top()){
                ans.push(tmp.top());
                tmp.push(cur);
                break;
            }

            else{
                tmp.pop();
            }
        }
        
        if(tmp.empty()){
            ans.push(-1);
            tmp.push(cur);
        }
        
    }

    while(!ans.empty()){
        cout << ans.top() << " ";
        ans.pop();
    }
}