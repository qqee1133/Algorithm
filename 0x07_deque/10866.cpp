#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin>>N;

    deque<int> DQ;
    string str;
    int num;

    while(N--){
        cin>>str;

        if(str == "push_front"){
            cin>>num;
            DQ.push_front(num);
        }

        if(str == "push_back"){
            cin>>num;
            DQ.push_back(num);
        }

        if(str == "pop_front"){
            if(DQ.empty()){
                cout<<"-1\n";
                continue;
            }
            cout<<DQ.front()<<"\n";
            DQ.pop_front();
        }

        if(str == "pop_back"){
            if(DQ.empty()){
                cout<<"-1\n";
                continue;
            }
            cout<<DQ.back()<<"\n";
            DQ.pop_back();
        }

        if(str == "size"){
            cout<<DQ.size()<<"\n";
        }

        if(str == "empty"){
            if(DQ.empty()){
                cout<<"1\n";
                continue;
            }
            cout<<"0\n";           
        }

        if(str == "front"){
            if(DQ.empty()){
                cout<<"-1\n";
                continue;
            }
            cout<<DQ.front()<<"\n";
        }

        if(str == "back"){
            if(DQ.empty()){
                cout<<"-1\n";
                continue;
            }
            cout<<DQ.back()<<"\n";
        }
    }
}