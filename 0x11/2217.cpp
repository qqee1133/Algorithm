#include <bits/stdc++.h>
using namespace std;

int n;
int arr[100005];
long long num;
long long tmp;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >>n;
    for(int i=0; i<n; i++)
        cin >> arr[i];

    sort(arr, arr+n);
    for(int i=0; i<n; i++){
        tmp = arr[i] * (n-i);
        num = max(tmp, num);
    }
    cout << num;
}