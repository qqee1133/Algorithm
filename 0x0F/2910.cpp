#include <bits/stdc++.h>
using namespace std;

#define x first
#define y second

int n;
int c;
int idx;

bool cmp(const pair<int, int> &a, const pair<int, int> &b){
    return a.x > b.x;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> c;
    vector<pair<int, int>> arr;

    int num;
    for(int i=0; i<n; i++){
        cin >> num;
        bool flag = 0;
        for(int j=0; j<arr.size(); j++){
            if(arr[j].y == num){
                arr[j].x++;
                flag = 1;
                break;
            }
        }
        if(!flag)
            arr.push_back({1, num});
    }
    
    stable_sort(arr.begin(), arr.end(), cmp);

    for(int i=0; i<arr.size(); i++){
        while(arr[i].x--) cout << arr[i].y << " ";
    }
}