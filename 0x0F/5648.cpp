#include <bits/stdc++.h>
using namespace std;
int n;
string str;
vector<long long> v;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> str;
        reverse(str.begin(), str.end());
        v.push_back(stoll(str));
    }
    sort(v.begin(), v.end());

    for(int i=0; i<n; i++)
        cout << v[i] << "\n";
}