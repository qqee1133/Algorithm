#include <bits/stdc++.h>
using namespace std;
int arr[1005];
int long_arr[1005];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    fill(long_arr, long_arr+n, 1);

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int i=1; i<n; i++){
        for(int j=i-1; j>=0; j--){
            if(arr[i] > arr[j] && long_arr[j] >= long_arr[i]){
                long_arr[i] = long_arr[j] + 1;
            }
        }
    }
    cout << *max_element(long_arr, long_arr + n);
}