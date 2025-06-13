#include <bits/stdc++.h>
using namespace std;

int arr[10001];
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int k;
    while(n--){
        cin >> k;
        arr[k]++;
    }

    for(int i=1; i<10001; i++){
        while(arr[i]){
            cout<<i<<"\n";
            arr[i]--;
        }
    }

}