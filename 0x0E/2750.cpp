#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int i=0; i<n; i++){
        cout<<*min_element(arr, arr+n)<<"\n";
        arr[min_element(arr, arr+n) - arr] = 1001;
    }

}