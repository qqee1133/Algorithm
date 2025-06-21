#include <bits/stdc++.h>
using namespace std;
int n;
int num;
int freq[2000005];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    while(n--){
        cin>>num;
        freq[num+1000000]++;
    }

    for(int i=0; i<2000005; i++){
        while(freq[i]){
            cout<<i-1000000<<"\n";
            freq[i]--;
        }
    }
}