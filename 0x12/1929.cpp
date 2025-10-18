#include <bits/stdc++.h>
using namespace std;

int n;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin>> n;

    if(n==1) return 0;

    int i=2;
    while(true){
        while(n%i==0){
            cout << i << "\n";
            n = n / i;
        }

        if(i*i > n){
            if(n>1)
                cout << n;
            return 0;
        }
        i++;
    }
}