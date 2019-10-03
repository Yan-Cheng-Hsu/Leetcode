#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> data;
    int t, n;
    int temp;
    char c;
    bool flag;
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>c;
        cin>>c;
        cin>>n;
        data.resize(0);
        for(int j=0; j<n*n; j++){
            cin>>temp;
            data.push_back(temp);
        }
        flag = true;
        for(int j=0; j<=n*n/2; j++){
            if(data[j]!=data[n*n-1-j] || data[j]<0){
                flag = false;
                break;
            }
        }
        if(flag) cout<<"Test #"<<i+1<<": Symmetric.\n";
        else     cout<<"Test #"<<i+1<<": Non-symmetric.\n";
    }
    return 0;
}