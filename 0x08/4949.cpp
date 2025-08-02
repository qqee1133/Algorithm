#include <bits/stdc++.h>
using namespace std;

int main(){   
    ios::sync_with_stdio(0);
    cin.tie(0);

    while(1){
        string str; 
        getline(cin, str);
        int flag=0;
        stack<char> s;

        if(str==".")
            exit(0);

        for(auto c : str){
            if(c=='(')
                s.push('(');
                
            if(c=='[')
                s.push('[');
                
            if(c==')'){
                if(s.empty()){
                    cout<<"no\n";
                    flag = 1;
                    break;
                }
                if(s.top()=='('){
                    s.pop();
                }
                else{
                    cout<<"no\n";
                    flag = 1;
                    break;
                }
            }

            if(c==']'){
                if(s.empty()){
                    cout<<"no\n";
                    flag = 1;
                    break;
                }

                if(s.top()=='['){
                    s.pop();
                }
                else{
                    cout<<"no\n";
                    flag = 1;
                    break;
                }
            }
        }
        if(s.empty()){
           if(flag == 0)
                cout<<"yes\n"; 
        }
        
        else{
            if(flag == 0)
                cout<<"no\n";            
        }
    }    
}