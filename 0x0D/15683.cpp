#include <bits/stdc++.h>
using namespace std;

int n, m;
int arr[10][10];
int cctv[10];
int cctv_index;
vector<pair<int, int>> v;
vector<int> sum_result;

void cctv1(int i);
void cctv2(int i);
void cctv3(int i);
void cctv4(int i);
void cctv5(int i);

void up_fill(int a, int b){
    for(int i=a-1; i>=0; i--){
        if(arr[i][b]==6)
            break;

        if(arr[i][b]==0)
            arr[i][b] = cctv_index+10;
    }    
}

void down_fill(int a, int b){
    for(int i=a+1; i<n; i++){
        if(arr[i][b]==6)
            break;

        if(arr[i][b]==0)
            arr[i][b] = cctv_index+10;
    }    
}

void left_fill(int a, int b){
    for(int i=b-1; i>=0; i--){
        if(arr[a][i]==6)
            break;

        if(arr[a][i]==0)
            arr[a][i] = cctv_index + 10;
    }    
}

void right_fill(int a, int b){
    for(int i=b+1; i<m; i++){
        if(arr[a][i]==6)
            break;

        if(arr[a][i]==0)
            arr[a][i] = cctv_index + 10;
    }    
}

void up_fill0(int a, int b){
    for(int i=a-1; i>=0; i--){
        if(arr[i][b]==6)
            break;

        if(arr[i][b]==cctv_index+10)
            arr[i][b] = 0;
    }    
}

void down_fill0(int a, int b){
    for(int i=a+1; i<n; i++){
        if(arr[i][b]==6)
            break;

        if(arr[i][b]==cctv_index+10)
            arr[i][b] = 0;
    }    
}

void right_fill0(int a, int b){
    for(int i=b+1; i<m; i++){
        if(arr[a][i]==6)
            break;

        if(arr[a][i]==cctv_index+10)
            arr[a][i] = 0;
    }    
}

void left_fill0(int a, int b){
    for(int i=b-1; i>=0; i--){
        if(arr[a][i]==6)
            break;

        if(arr[a][i]==cctv_index+10)
            arr[a][i] = 0;
    }    
}

void func(int cctv_num){
    int result = 0;
    if(cctv_num==0){
        for(int j=0; j<n; j++){
            for(int k=0; k<m; k++){
                if(arr[j][k]==0)
                    result++;
            }
        }
        sum_result.push_back(result);
        return;
    }
        
    
    if(cctv_num==1){
        for(int i=0; i<4; i++){
            cctv1(i);
        }
    }

    if(cctv_num==2){
        for(int i=0; i<2; i++){
            cctv2(i);
        }
    }

    if(cctv_num==3){
        for(int i=0; i<4; i++){
            cctv3(i);
        }
    }

    if(cctv_num==4){
        for(int i=0; i<4; i++){
            cctv4(i);
        }
    }

    if(cctv_num==5){
        for(int i=0; i<1; i++){
            cctv5(i);
        }
    }
}

void cctv1(int i){
    if(i==0){
        up_fill(v[cctv_index].first, v[cctv_index].second);
        func(cctv[++cctv_index]);
        --cctv_index;
        up_fill0(v[cctv_index].first, v[cctv_index].second);
    }

    if(i==1){
        down_fill(v[cctv_index].first, v[cctv_index].second);
        func(cctv[++cctv_index]);
        --cctv_index;
        down_fill0(v[cctv_index].first, v[cctv_index].second);
    }

    if(i==2){
        left_fill(v[cctv_index].first, v[cctv_index].second);
        func(cctv[++cctv_index]);
        --cctv_index;
        left_fill0(v[cctv_index].first, v[cctv_index].second);
    }

    if(i==3){
        right_fill(v[cctv_index].first, v[cctv_index].second);
        func(cctv[++cctv_index]);
        --cctv_index;
        right_fill0(v[cctv_index].first, v[cctv_index].second);
    }
}

void cctv2(int i){
    int x = v[cctv_index].first;
    int y = v[cctv_index].second;
    if(i==0){
        up_fill(x, y);
        down_fill(x, y);
        func(cctv[++cctv_index]);
        --cctv_index;
        up_fill0(x, y);
        down_fill0(x, y);
    }

    if(i==1){
        left_fill(x, y);
        right_fill(x, y);
        func(cctv[++cctv_index]);
        --cctv_index;
        left_fill0(x, y);
        right_fill0(x, y);
    }
}

void cctv3(int i){
    int x = v[cctv_index].first;
    int y = v[cctv_index].second;

    if(i==0){
        up_fill(x, y); right_fill(x, y);
        func(cctv[++cctv_index]);
        --cctv_index;
        up_fill0(x, y); right_fill0(x, y);
    }

    if(i==1){
        right_fill(x, y); down_fill(x, y);
        func(cctv[++cctv_index]);
        --cctv_index;
        right_fill0(x, y); down_fill0(x, y);
    }

    if(i==2){
        down_fill(x, y); left_fill(x, y);
        func(cctv[++cctv_index]);
        --cctv_index;
        down_fill0(x, y); left_fill0(x, y);
    }

    if(i==3){
        left_fill(x, y); up_fill(x, y);
        func(cctv[++cctv_index]);
        --cctv_index;
        left_fill0(x, y); up_fill0(x, y);
    }
}

void cctv4(int i){
    int x = v[cctv_index].first;
    int y = v[cctv_index].second;

    if(i==0){
        left_fill(x, y); up_fill(x, y); right_fill(x, y);
        func(cctv[++cctv_index]);
        --cctv_index;
        left_fill0(x, y); up_fill0(x, y); right_fill0(x, y);
    }

    if(i==1){
        up_fill(x, y); right_fill(x, y); down_fill(x, y);
        func(cctv[++cctv_index]);
        --cctv_index;
        up_fill0(x, y); right_fill0(x, y); down_fill0(x, y);
    }

    if(i==2){
        right_fill(x, y); down_fill(x, y); left_fill(x, y);
        func(cctv[++cctv_index]);
        --cctv_index;
        right_fill0(x, y); down_fill0(x, y); left_fill0(x, y);
    }

    if(i==3){
        down_fill(x, y); left_fill(x, y); up_fill(x, y);
        func(cctv[++cctv_index]);
        --cctv_index;
        down_fill0(x, y); left_fill0(x, y); up_fill0(x, y);
    }
}


void cctv5(int i){
    int x = v[cctv_index].first;
    int y = v[cctv_index].second;

    up_fill(x, y); down_fill(x, y); left_fill(x, y); right_fill(x, y);
    func(cctv[++cctv_index]);
    --cctv_index;
    up_fill0(x, y); down_fill0(x, y); left_fill0(x, y); right_fill0(x, y);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++)
            cin >> arr[i][j];
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j]==0){
                continue;
            }

            if(arr[i][j]==6){
                continue;
            }

            cctv[cctv_index++] = arr[i][j];
            v.push_back(make_pair(i, j));
        }
    }

    cctv_index = 0;
    func(cctv[cctv_index]);

    cout << *min_element(sum_result.begin(), sum_result.end());
}