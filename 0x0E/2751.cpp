#include <bits/stdc++.h>
using namespace std;

int arr[1000001];
int tmp[1000001];

void merge(int st, int en){
    int mid = (st+en)/2;
    
    int front_index = st;
    int back_index = mid;

    for(int i=st; i<en; i++){
        if(front_index == mid) tmp[i] = arr[back_index++];
        else if(back_index == en) tmp[i] = arr[front_index++];
        else if(arr[front_index] < arr[back_index]) tmp[i] = arr[front_index++];
        else tmp[i] = arr[back_index++];
    }

    for(int i=st; i<en; i++)
        arr[i] = tmp[i];
}

// arr[st:en]을 정렬하고 싶다.
void merge_sort(int st, int en){
    if(st + 1 == en) return; // 길이 1인 경우
    int mid = (st+en)/2;
    merge_sort(st, mid); // arr[st:mid]을 정렬한다.
    merge_sort(mid, en); // arr[mid:en]을 정렬한다.
    merge(st, en); // arr[st:mid]와 arr[mid:en]을 합친다.
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> arr[i];

    merge_sort(0, n);
    for(int i = 0; i < n; i++) cout << arr[i] << "\n";
}