#include <bits/stdc++.h>
using namespace std;
int arr[100005];
int max_arr[100005];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    max_arr[0] = arr[0];
    for(int i=1; i<n; i++){
        max_arr[i] = max(max_arr[i-1] + arr[i], arr[i]);
    }

    cout << *max_element(max_arr, max_arr + n);
}