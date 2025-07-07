#include <bits/stdc++.h>
using namespace std;

int occur[100001];
char answer[100001];
int idx;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;

    stack<int> S;
    int num;

    while(n--){
        cin>>num;

        if(occur[num] == 0){
            for(int i=1; i<=num; i++){
                if(occur[i] == 0){
                    S.push(i);
                    occur[i] = 1;
                    answer[idx++] = '+';
                }
            }
        }

        if(S.top() == num){
            answer[idx++] = '-';
            S.pop();
        }

        else{
            cout<<"NO";
            exit(0);
        }
    }

    for(int i=0; i<idx; i++)
        cout<<answer[i]<<"\n";
}   