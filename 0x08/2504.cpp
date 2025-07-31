#include <bits/stdc++.h>
using namespace std;

int result;
int tmp=1;
int main(){   
    ios::sync_with_stdio(0);
    cin.tie(0);

    string str;
    cin >> str;
    
    stack<char> s;

    for(int i=0; i<str.length(); i++){
        if(str[i] == '('){
            tmp*=2;
            s.push(str[i]);
        }

        else if(str[i] == '['){
            tmp*=3;
            s.push(str[i]);
        }

        else{
            if(s.empty()){
                cout << 0;
                return 0;
            }

            if(str[i] == ')'){
                if(s.top() == '('){
                    if(str[i-1] == '('){
                        result += tmp;
                        tmp = tmp/2;
                    }
                    else{
                        tmp = tmp/2;
                    }
                    s.pop();
                }

                else{
                    cout << 0;
                    return 0;
                }
            }

            else{
                if(s.top() == '['){
                    if(str[i-1] == '['){
                        result += tmp;
                        tmp = tmp/3;
                    }
                    else{
                        tmp = tmp/3;
                    }
                    s.pop();
                }
                else{
                    cout << 0;
                    return 0;
                }
            }
        }
    }

    if(s.empty())
        cout<<result<<"\n";
    else
        cout<<0;
}