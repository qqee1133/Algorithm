#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int K;
    cin>>K;

    stack<int> S;
    int num;

    while(K--){
        cin>>num;

        if(num==0){
            if(S.empty())
                continue;
            
            S.pop();
        }

        else{
            S.push(num);
        }             
    }

    int sum=0;
    while(S.empty() != 1){
        sum += S.top();
        S.pop();
    }
    cout<<sum;
}