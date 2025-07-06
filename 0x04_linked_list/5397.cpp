#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int M;
    cin >> M;

    while(M--){
        string str;
        cin>>str;

        list<char> ls;
        list<char>::iterator it = ls.begin();

        for(auto i : str){
            if(i == '<'){
                if(it == ls.begin())
                    continue;
                
                it--;
            }

            else if(i == '>'){
                if(it == ls.end())
                    continue;
                
                it++;
            }

            else if(i == '-'){
                if(it == ls.begin())
                    continue;
                
                it--;
                it = ls.erase(it);
            }

            else{
                it = ls.insert(it, i);
                it++;
            }

            
        }
        for(auto i : ls)
            cout << i;
        cout<<"\n";

    }
}