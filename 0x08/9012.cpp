#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    
    while(t--){
        string str;
        cin >> str;

        stack<char> s;
        int flag = 1;

        for(auto c : str){
            if(c == '('){
                s.push('(');
            }

            if(c == ')'){
               if(s.empty()){
                    flag = 0;
                    break;
               }

               if(s.top() == '('){
                    s.pop();
               }

               else {
                    flag = 0;
                    break;
               }
            }
        }

        if(s.empty() && flag) cout << "YES\n";
        else cout << "NO\n";
    }
}