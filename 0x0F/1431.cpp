#include <bits/stdc++.h>
using namespace std;
int n;
string arr[55];

int func(string s){
    int num=0;
    for(int i=0; i<s.length(); i++){
        if(s[i] < 58){
            num += s[i]-48;
        }
    }
    return num;
}

bool cmp(string a, string b){
    if(a.length() != b.length()) return a.length() < b.length();
    if(func(a) != func(b)) return func(a) < func(b);
    return a < b;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    
    for(int i=0; i<n; i++)
        cin >> arr[i];

    sort(arr, arr+n, cmp);

    for(int i=0; i<n; i++)
        cout << arr[i] << "\n";
}