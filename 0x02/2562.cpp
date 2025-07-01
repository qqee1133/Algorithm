#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int max = 0;
    int seq = 0;
    int num;

    for(int i=1; i<=9; i++) {
        cin >> num;
        if(num > max){
            max = num;
            seq = i;
        }
    }

    cout << max << "\n";
    cout << seq;
}