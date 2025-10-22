#include <bits/stdc++.h>
using namespace std;

int n;
int arr[105];

bool isprime(int a){
    if(a==1) return 0;
    
    for(int i=2; i*i<=a; i++){
        if(a%i==0)
            return 0;
    }
    return 1;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >>n;
    for(int i=0; i<n; i++)
        cin >> arr[i];

    int cnt=0;
    for(int i=0; i<n; i++){
        if(isprime(arr[i])) cnt++;
    }
    cout << cnt;
}