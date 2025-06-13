#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> v;
vector<pair<int, int>> tmp;

void merge(int st, int ed){
    int mid = (st + ed) / 2;
    int front_index = st;
    int back_index = mid;

    for(int i=st; i<ed; i++){
        if(front_index == mid) tmp[i] = v[back_index++];
        else if(back_index == ed) tmp[i] = v[front_index++];
        else if(v[front_index].first < v[back_index].first) tmp[i] = v[front_index++];
        else if(v[front_index].first > v[back_index].first) tmp[i] = v[back_index++];
        else{
            if(v[front_index].second <= v[back_index].second) tmp[i] = v[front_index++];
            else tmp[i] = v[back_index++];
        }
    }

    for(int i=st; i<ed; i++){
        v[i] = tmp[i];
    }
}

void merge_sort(int st, int ed){
    if(st + 1 == ed)
        return;
    int mid = (st + ed) / 2;

    merge_sort(st, mid);
    merge_sort(mid, ed);
    merge(st, ed);
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int x, y;
    for(int i=0; i<n; i++){
        cin >> x >> y;
        v.push_back(make_pair(x, y));
        tmp.push_back(make_pair(x, y));
    }

    // for(int i=0; i<n; i++){
    //     cout<<v[i].first<<" "<<v[i].second<<"\n";
    // }

    merge_sort(0, n);
    for(int i=0; i<n; i++){
        cout<<v[i].first<<" "<<v[i].second<<"\n";
    }
}