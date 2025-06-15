#include <bits/stdc++.h>
using namespace std;
int n;
string arr[20005];

bool cmp(string a, string b){
    if(a.length() != b.length()) return a.length() < b.length();
    return a < b;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    sort(arr, arr+n, cmp);

    for(int i=0; i<n; i++){
        if(arr[i] == arr[i-1]) continue;
        cout << arr[i] << "\n";
    }
}