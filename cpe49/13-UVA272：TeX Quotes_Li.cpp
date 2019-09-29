#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    bool flag;
    while(!cin.eof()){
        getline(cin, str, '\0');
        flag = true;
        for(int i=0; i<str.length(); i++){
            if(str[i]=='\"'){
                if(flag){
                    str = str.substr(0,i) + "``" + str.substr(i+1);
                    flag = false;
                }
                else{
                    str = str.substr(0,i) + "\'\'" + str.substr(i+1);
                    flag = true;
                }
            }
        }
        cout<<str;
    }
    return 0;
}