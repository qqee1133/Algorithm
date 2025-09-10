#include <bits/stdc++.h>
using namespace std;
long long arr[105];
int n;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    arr[1] = 1; arr[2] = 1; arr[3] = 1;
    arr[4] = 2; arr[5] = 2;

    for(int i=6; i<=100; i++)
        arr[i] = arr[i-1] + arr[i-5];

    while(t--){
        cin >> n;
        cout << arr[n] << "\n";
    }
}