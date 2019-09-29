#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    string str;
    vector<string> data;
    bool flag;
    int max_len = 0;
    while(getline(cin, str)){
        data.push_back(str);
        if(str.length()>max_len) max_len = str.length();
    }
    
    for(int i=0; i<max_len; i++){
        flag = false;
        str = "";
        for(int j=0; j<data.size(); j++){
            if(i<data[j].length()){
                str = data[j][i] + str;
                flag = true;
            }
            else if(flag){
                str = " " + str;
            }
        }
        cout<<str<<endl;
    }
    
    return 0;
}