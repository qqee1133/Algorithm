#include <bits/stdc++.h>
using namespace std;

int cnt;
int length;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        int rev = 0;

        string p;
        cin >> p;
        int n;
        cin >> n;
        string str;
        cin >> str;

        deque<int> DQ;
        int cur=0;
        for(int i=1; i<str.size()-1; i++){
            if(str[i]==','){
                DQ.push_back(cur);
                cur = 0;
            }
            else{
                cur = 10 * cur + (str[i] - '0');
            }
        }

        if(cur != 0)
            DQ.push_back(cur);

        for(auto i : p){
            if(i=='R'){
                rev = 1 - rev;
            }

            if(i=='D'){
                if(DQ.empty()){
                    cout<<"error\n";
                    goto next;
                }
                if(!rev)
                    DQ.pop_front();
                else
                    DQ.pop_back();
            }
        }

        length = (int)(DQ.size());

        if(rev)
            reverse(DQ.begin(), DQ.end());
        cout << '[';
        for(int i = 0; i < DQ.size(); i++)
        {
            cout << DQ[i];
            if(i+1 != DQ.size())
                cout << ',';
        }
        cout << "]\n";
    next:
        continue;
    }
}