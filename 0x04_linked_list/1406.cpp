#include <bits/stdc++.h>
using namespace std;

list<char> ls;
list<char>::iterator it;
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string str;
    cin>>str;

    for(auto i : str){
        ls.push_back(i);
    }

    it = ls.end();

    int M;
    cin >> M;

    char ch;
    while(M--){
        cin >> ch;

        switch (ch)
        {
        case('L'):
            if(it==ls.begin())
                break;
            it--;
            break;

        case('D'):
            if(it==ls.end())
                break;
            it++;
            break;

        case('B'):
            if(it==ls.begin())
                break;
            it = ls.erase(--it);
            break;

        case('P'):
            char c;
            cin>>c;
            ls.insert(it, c);
            break;
        default:
            break;
        }
    }

    for(auto i : ls){
        cout<<i;
    }
}