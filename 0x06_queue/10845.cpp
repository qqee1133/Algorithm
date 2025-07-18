#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    queue<int> Q;
    string str;
    int num;

    while(N--){
        cin>>str;

        if(str=="push"){
            cin>>num;
            Q.push(num);
        }

        if(str=="pop"){
            if(Q.empty()){
                cout<<"-1\n";
                continue;
            }
            cout<<Q.front()<<"\n";
            Q.pop();
        }

        if(str=="size"){
            cout<<Q.size()<<"\n";
        }

        if(str=="empty"){
            if(Q.empty()){
                cout<<"1\n";
                continue;
            }
            cout<<"0\n";
        }

        if(str=="front"){
            if(Q.empty()){
                cout<<"-1\n";
                continue;
            }
            cout<<Q.front()<<"\n";
        }
        
        if(str=="back"){
            if(Q.empty()){
                cout<<"-1\n";
                continue;
            }
            cout<<Q.back()<<"\n";
        }
    }
}