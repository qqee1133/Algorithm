#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int A, B;

    while(1){
        cin>>A>>B;

        if(A>0 &&B<10)
            break;
    }

    cout<<A+B<<"\n";
        
}