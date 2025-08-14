#include <bits/stdc++.h>
using namespace std;

int num_stick;
char prev_ch;
int main(){   
    ios::sync_with_stdio(0);
    cin.tie(0);

    string str;
    cin >> str;

    stack<char> s;

    for(auto i : str){

        if(i == '('){
            s.push(i);
        }

        else{
            s.pop();

            if(prev_ch=='('){
                num_stick += s.size();
            }

            else{                
                num_stick++;
            }
        }

        prev_ch = i;
    }
    cout << num_stick <<"\n";
}