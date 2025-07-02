#include<bits/stdc++.h>
using namespace std;

int ans[2000001];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;

    int arr[n];
    int x;
    int num, num2;
    int answer=0;

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cin >> x;

    for(int i=0; i<n; i++){
        num = arr[i];
        num2 = x - num;

        if(num2 >= 1){
            if(ans[num2])
                answer++;
        
            ans[num] = 1;
        }
    }

    cout << answer;
}