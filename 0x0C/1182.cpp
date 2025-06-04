#include <bits/stdc++.h>
using namespace std;
int n, s;
int arr[21];
int arr2[21];
int cnt;

void func(int num){
    if(num == n){
        int tmp = 0;
        
        for(int i=0; i<n; i++)
            tmp += arr2[i];

        if(tmp==s)
            cnt++;        
        return;
    }

    for(int i=0; i<2; i++){
        if(i==0){
            arr2[num] = arr[num];
            func(num+1);
        }
        else{
            arr2[num] = 0;
            func(num+1);
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> s;

    for(int i=0; i<n; i++)
        cin >> arr[i];

    func(0);
    
    if (s==0) cnt -= 1;    
    cout << cnt;
}