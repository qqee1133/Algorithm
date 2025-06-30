#include<bits/stdc++.h>
using namespace std;

string s1, s2;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n = 30;
    int arr[n];
    
    for(int i = 0; i<n; i++) {
        arr[i] = 0;
    }

    cin >> s1 >> s2;
    int count = 0;

    for(char c : s1)
        arr[c-'a']++;
    
    for(char c : s2){
        arr[c-'a']--;
    }

    for(int i = 0; i<n; i++) {
        count += abs(arr[i]);
    }
        
    cout << count;
}