#include <bits/stdc++.h>
using namespace std;
int arr[1005];
int max_arr[1005];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int i=0; i<n; i++){
        max_arr[i] = arr[i];
        int tmp=0;
        for(int j=i-1; j>=0; j--){
            if(arr[i] > arr[j] && max_arr[j] > tmp){
                tmp = max_arr[j];
            }
        }
        max_arr[i] += tmp;
    }

    cout << *max_element(max_arr, max_arr + n);
}