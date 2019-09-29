#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){
    int n;
    string str;
    map<string, int> table;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>str;
        if(table.find(str)==table.end()){
            table[str] = 1;
        }
        else{
            table[str]++;
        }
        cin>>str;
        cin>>str;
    }
    for(auto iter=table.begin(); iter!=table.end(); iter++){
        cout<<iter->first<<" "<<iter->second<<endl;
    }
    return 0;
}