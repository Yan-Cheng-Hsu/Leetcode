#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    vector<string> data;
    string str;
    int r, c;
    int i=0;
    while(cin>>r>>c){
        if(r==0 && c==0) break;
        i++;
        if(i!=1) cout<<endl;
        
        cout<<"Field #"<<i<<":\n";
        
        data.resize(0);
        getline(cin, str);
        for(int j=0; j<r; j++){
            getline(cin, str);
            for(int k=0; k<c; k++){
                if(str[k]=='.') str[k] = '0';
            }
            data.push_back(str);
        }
        
        for(int j=0; j<r; j++){
            for(int k=0; k<c; k++){
                if(data[j][k]=='*'){
                    for(int x=j-1; x<=j+1; x++){
                        for(int y=k-1; y<=k+1; y++){
                            if(x>=0 && x<r && y>=0 && y<c && data[x][y]!='*'){
                                data[x][y] += 1;
                            }
                        }
                    }
                }
            }
        }
        
        for(int j=0; j<r; j++){
            cout<<data[j]<<endl;
        }
        
    }
    return 0;
}