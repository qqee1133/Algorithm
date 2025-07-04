#include <bits/stdc++.h>
using namespace std;

int arr[210];

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, v;
    int num;

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> num;
        arr[num+100]++;
    }
    
    cin >> v;

    cout << arr[v+100];
}