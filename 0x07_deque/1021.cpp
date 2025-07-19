    #include <bits/stdc++.h>
    using namespace std;

    int cnt;
    int main(){
        ios::sync_with_stdio(0);
        cin.tie(0);

        int n, m;
        cin>>n>>m;


        deque<int> DQ;
        for(int i=1; i<=n; i++)
            DQ.push_back(i);

        int num;
        while(m--){
            cin>>num;

            int idx = find(DQ.begin(), DQ.end(), num) - DQ.begin();

            while(DQ.front() != num){
                if(idx <= (int)DQ.size() - idx){
                    DQ.push_back(DQ.front());
                    DQ.pop_front();
                    cnt++;
                }
                else{
                    DQ.push_front(DQ.back());
                    DQ.pop_back();
                    cnt++;
                }
            }
            DQ.pop_front();
        }
        cout<<cnt;
    }