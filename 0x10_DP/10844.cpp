#include <bits/stdc++.h>
using namespace std;
int arr[10];
int tmp[10];
int n;
int num;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    fill(arr+1, arr+10, 1);

    for(int i=2; i<=n; i++){
        tmp[0] = arr[1];
        for(int j=1; j<=8; j++){
            tmp[j] = (arr[j-1] + arr[j+1]) % 1000000000;
        }
        tmp[9] = arr[8];

        for(int j=0; j<=9; j++)
            arr[j] = tmp[j];
    }
    
    for(int i=0; i<10; i++){
        num += arr[i];
        num %= 1000000000;
    }
    cout << num;
}