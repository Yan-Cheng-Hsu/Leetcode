#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <algorithm>
using namespace std;

int main(){
    vector<string> data;
    int n;
    float total, part;
    string str;
    cin>>n;
    getline(cin, str);
    getline(cin, str);
    for(int i=0; i<n; i++){
        data.resize(0);
        total = 0;
        
        while(getline(cin, str)){
            if(str=="") break;
            total++;
            data.push_back(str);
        }
        sort(data.begin(), data.end());
        for(int j=0; j<data.size(); j++){
            if(j==0){
                part = 1;
            } 
            else if(data[j-1]!=data[j]){
                cout<<data[j-1]<<" "<<fixed<<setprecision(4)<<part/total*100<<endl;
                part = 1;
            }
            else{
                part++;
            }
            
            if(j==data.size()-1){
                cout<<data[j]<<" "<<fixed<<setprecision(4)<<part/total*100<<endl;
            }
        }
        if(i!=n-1) cout<<endl;
    }
    return 0;
}