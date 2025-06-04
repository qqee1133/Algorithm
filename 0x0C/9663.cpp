#include <bits/stdc++.h>
using namespace std;

int n;
int ans;

bool isused1[15];
bool isused2[30];
bool isused3[30];

void queen(int num){
    if(num == n){
        ans++;
        return;
    }

    for(int i=0; i<n; i++){
        if(isused1[i]==0 && isused2[num+i]==0 && isused3[num-i+n-1]==0){
            isused1[i] = 1;
            isused2[num+i] = 1;
            isused3[num-i+n-1] = 1;

            queen(num+1);

            isused1[i] = 0;
            isused2[num+i] = 0;
            isused3[num-i+n-1] = 0;            
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    queen(0);

    cout << ans;
}