#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int arr[100002];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;

    fill(arr, arr+100002, -1);

    queue<int> q;
    q.push(n);
    arr[n] = 0;

    while(arr[k]==-1){
        int cur = q.front();
        q.pop();

        int num1 = cur - 1;
        int num2 = cur + 1;
        int num3 = cur * 2;

        if(num1>=0 && arr[num1]==-1){
            q.push(num1);
            arr[num1] = arr[cur] + 1;
        }

        if(num2<100002 && arr[num2]==-1){
            q.push(num2);
            arr[num2] = arr[cur] + 1;
        }

        if(num3<100002 && arr[num3]==-1){
            q.push(num3);
            arr[num3] = arr[cur] + 1;
        }
    }

    cout << arr[k];
}