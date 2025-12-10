#include <bits/stdc++.h>
using namespace std;

int n;
int ans_minus1;
int ans0;
int ans1;
int arr[2200][2200];

void func(int x, int y, int k) {
    int num = arr[x][y];
    bool flag = true;

    for(int i=x; i<x+k; i++){
        for(int j=y; j<y+k; j++){
            if(num != arr[i][j]){
                flag = false;
                break;
            }
        }
        if(!flag) break;
    }

    if(flag){
        if(num == -1){
            ans_minus1++;
        }
        else if(num == 0){
            ans0++;
        }
        else{
            ans1++;
        }

        return;
    }

    int tmp = k / 3;
    for(int i=x; i<x+k; i+=tmp){
        for(int j=y; j<y+k; j+=tmp){
            func(i, j, tmp);
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }

    func(0, 0, n);

    cout << ans_minus1 << "\n";
    cout << ans0 << "\n";
    cout << ans1 << "\n";
}