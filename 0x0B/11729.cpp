#include <bits/stdc++.h>
using namespace std;

long long func1(long long n){
    if(n == 1) return 1;
    return 2* func1(n-1) + 1;
}

void func2(int a, int b, int n){
    if(n==1) {
        cout << a <<" "<< b <<"\n";
        return;
    }
    func2(a, 6-a-b, n-1);
    cout << a << " " << b <<"\n";
    func2(6-a-b, b, n-1);    
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;

    cout << func1(n) << "\n";

    int a=1;
    int b=3;

    func2(a, b, n);
}