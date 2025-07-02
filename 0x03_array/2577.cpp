#include <bits/stdc++.h>

using namespace std;

int arr[10];
int main(){
    int a, b, c;
    cin>>a>>b>>c;

    int num = a * b * c;
    string str = to_string(num);

    for(auto s : str){
        int i = (int)s;
        arr[i-48]++;
    }

    for(int i=0; i<10; i++)
        cout<<arr[i]<<"\n";
}