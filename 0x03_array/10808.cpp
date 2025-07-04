#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    char S[100];
    int arr[26] = {0};
    int num=0;

    cin>>S;
    
    while(1){
        for(int i=0; i<100; i++){
            num = S[i];

            if (num == 0)
                break;
            
            arr[num-97] += 1;
        }
        break;
    }

    for(int i=0; i<26; i++){
        cout<<arr[i]<<' ';
    }
    
}