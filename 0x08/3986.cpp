#include <bits/stdc++.h>
using namespace std;

int main(){   
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    int good_word = 0;

    while(n--){
        string str;
        cin>>str;
        stack<char> s;

        for(auto c : str){
            if (s.empty()){
                s.push(c);
            }

            else{
                if(c=='A'){
                    if(s.top()=='A'){
                        s.pop();
                    }

                    else{
                        s.push(c);
                    }
                }

                else{
                    if(s.top()=='B'){
                        s.pop();
                    }

                    else{
                        s.push(c);
                    }
                }
            }
        }
        if(s.empty())
            good_word++;
    }
    cout<<good_word;   
}