#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin>>N;

    stack<int> S;
    string str;
    int num;

    while(N--){
        cin>>str;

        if(str == "push"){
            cin>>num;
            S.push(num);
        }

        if(str == "pop"){
            if(S.empty()){
                cout<<"-1\n";
            }

            else{
                cout<<S.top()<<"\n";
                S.pop();
            }
        }

        if(str == "size"){
            cout<<S.size()<<"\n";
        }

        if(str == "empty"){
            if(S.empty()){
                cout<<"1\n";
            }

            else
                cout<<"0\n";
        }

        if(str == "top"){
            if(S.empty()){
                cout<<"-1\n";                
            }

            else
                cout<<S.top()<<"\n";
        }        
            
        
        
    }
}