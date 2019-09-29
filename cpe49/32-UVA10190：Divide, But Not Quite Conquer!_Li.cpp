#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, m;
    bool flag;
    vector<int> data;
    while(cin>>n>>m){
        if(m==1){
            cout<<"Boring!\n";
            continue;
        }
    
        flag = false;
        data.resize(0);
        data.push_back(n);
        while(n>1){
            if(n%m!=0){ 
                flag = true;
                break;
            }
            else{
                n = n/m;
                data.push_back(n);
            }
        }
        
        if(flag){
            cout<<"Boring!\n";
        }
        else{
            cout<<data[0];
            for(int i=1; i<data.size(); i++){
                cout<<" "<<data[i];            
            }
            cout<<endl;
        }
    }
    return 0;
}