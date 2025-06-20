#include <bits/stdc++.h>
using namespace std;
int n;
long long arr[100005];
int cnt;
long long num;
int longest;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for(int i=0; i<n; i++)
        cin >> arr[i];

    sort(arr, arr+n);

    num = arr[0];
    cnt = 1;
    longest = 1;
    for(int i=1; i<n; i++){
        if(arr[i] == arr[i-1]) cnt++;
        else{
            if(cnt > longest){
                longest = cnt;
                num = arr[i-1];
            }
            cnt = 1;
        }
    }

    if(cnt > longest){
        cout << arr[n-1];
    }
    else cout << num;
}