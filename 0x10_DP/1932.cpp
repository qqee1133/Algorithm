#include <bits/stdc++.h>
using namespace std;
int arr[505][505];
int ans[505][505];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cin >> arr[i][j];
        }
    }

    ans[0][0] = arr[0][0]; 
    for(int i=1; i<n; i++){
        for(int j=0; j<=i; j++){
            if(j==0)
                ans[i][j] = ans[i-1][j] + arr[i][j];
            else if(j==i)
                ans[i][j] = ans[i-1][j-1] + arr[i][j];
            else
                ans[i][j] = max(ans[i-1][j-1], ans[i-1][j]) + arr[i][j];
        }
    }

    int result = 0;
    for(int i=0; i<n; i++){
        if(ans[n-1][i] > result)
            result = ans[n-1][i];
    }
    cout << result;
}