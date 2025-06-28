#include <bits/stdc++.h>

using namespace std;

int arr[9] = {0};
int main(){
    int n;
    cin>>n;
    int num;

    while(n != 0){
        num = n%10;
        if(num == 6 || num == 9){
            arr[6]++;
        }
        else{
            arr[num]++;
        }
        n = n/10;

    }
    if(arr[6]%2==0){
        arr[6] = arr[6]/2;
    }
    else
        arr[6] = (arr[6]/2) + 1;

    int max=0;
    for(int i =0; i<9; i++){
        if(arr[i] > max)
            max = arr[i];
    }

    cout<<max;
}