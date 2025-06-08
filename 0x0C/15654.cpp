#include <bits/stdc++.h>
using namespace std;

int n, m;
int arr[10];
int tmp[10] = {-1};
bool flag;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    for(int i=0; i<n; i++)
        cin>>arr[i];
    sort(arr, arr+n);

    do{
        for(int i=0; i<m; i++){
            if(arr[i] != tmp[i]){
                flag = 1;
            }
            tmp[i] = arr[i];
        }
        if(flag){
            for(int i=0; i<m; i++){
                cout << arr[i] <<" ";
            }
            cout <<"\n";
            flag = 0;
        }
    } while(next_permutation(arr, arr+n));
}