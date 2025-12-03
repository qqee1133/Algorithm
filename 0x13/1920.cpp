#include <bits/stdc++.h>
using namespace std;

int arr[100001];
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
    
    cin >> n;

    for(int i=0; i<n; i++)
        cin >> arr[i];

    sort(arr, arr+n);
    
    int m;
    cin >> m;

    int num;

    while(m--){
        cin >> num;
        cout << func(num) << "\n";        
    }
}