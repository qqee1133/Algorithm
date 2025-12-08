#include <bits/stdc++.h>
using namespace std;

int sum_liquid = 2e9 + 1;
int liquid1;
int liquid2;

int arr[100001];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    for(int i=0; i<n; i++)
        cin >> arr[i];

    for(int i=0; i<n; i++){
        int find_index = lower_bound(arr, arr+n, -arr[i]) - arr;

        if(find_index+1 < n && find_index+1 != i && abs(arr[i] + arr[find_index+1]) < sum_liquid){
            liquid1 = arr[i];
            liquid2 = arr[find_index+1];
            sum_liquid = abs(arr[i] + arr[find_index+1]);
        }

        if(find_index < n && find_index != i && abs(arr[i] + arr[find_index]) < sum_liquid){
            liquid1 = arr[i];
            liquid2 = arr[find_index];
            sum_liquid = abs(arr[i] + arr[find_index]);
        }

        if(find_index-1 >=0 && find_index-1 != i && abs(arr[i] + arr[find_index-1]) < sum_liquid){
            liquid1 = arr[i];
            liquid2 = arr[find_index-1];
            sum_liquid = abs(arr[i] + arr[find_index-1]);
        }
    }

    if(liquid1 > liquid2) swap(liquid1, liquid2);
    cout << liquid1 << " " << liquid2;
}