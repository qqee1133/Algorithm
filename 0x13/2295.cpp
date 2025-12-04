#include <bits/stdc++.h>
using namespace std;

int arr[1001];
int n;

int func(int num){
    int front = 0;
    int end = n-1;

    while(front <= end){
        int mid = (front + end) / 2;
        if(num == arr[mid]){
            return 1;
        }
        else if(num < arr[mid]){
            end = mid - 1;
        }
        else{
            front = mid + 1;
        }
    }
    return 0;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;

    for(int i=0; i<n; i++)
        cin >> arr[i];

    sort(arr, arr+n);

    vector<int> v;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            v.push_back(arr[i] + arr[j]);
        }
    }
    
    sort(v.begin(), v.end());

    for(int i=n-1; i>0; i--){
        for(int j=0; j<=i; j++){
            if(binary_search(v.begin(), v.end(), arr[i] - arr[j])){
                cout << arr[i];
                return 0;
            }
        }
    }
}