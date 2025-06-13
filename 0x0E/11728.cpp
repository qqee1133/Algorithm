#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    int a[n];
    int b[m];

    for(int i=0; i<n; i++)
        cin >> a[i];

    for(int i=0; i<m; i++)
        cin >> b[i];

    int num = n + m;
    int arr[num];
    int index_a=0;
    int index_b=0;

    for(int i=0; i<num; i++){
        if(index_a != n && index_b != m){
            if(a[index_a] >= b[index_b]){
                arr[i] = b[index_b];
                index_b++;
            }
            else{
                arr[i] = a[index_a];
                index_a++;
            }
        }

        else if(index_a == n){
            for(int j=i; j<num; j++){
                arr[j] = b[index_b];
                index_b++;
            }
            break;
        }

        else{
            for(int j=i; j<num; j++){
                arr[j] = a[index_a];
                index_a++;
            }
            break;
        } 
    }

    for(int i=0; i<num; i++){
        cout << arr[i] <<" ";
    }
}