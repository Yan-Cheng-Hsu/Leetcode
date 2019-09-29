#include <string>
#include <iostream>
using namespace std;

int main(){
    string str;
    char c;
    int n, m;
    while(cin>>str){
        c = '0';
        n = 0;
        for(int i=0; i<str.length(); i++){
            if(str[i]=='-' || str[i]=='+') continue;
            
            if(str[i]>c) c = str[i];
            
	        if     (str[i]>='0' && str[i]<='9') n += str[i]-'0';
	        else if(str[i]>='A' && str[i]<='Z') n += str[i]-'A'+10;
	        else if(str[i]>='a' && str[i]<='z') n += str[i]-'a'+36;
        }
        
        if(c>='0' && c<='9') m = c-'0';
        else if(c>='A' && c<='Z') m = c-'A'+10;
        else if(c>='a' && c<='z') m = c-'a'+36;

        for(int i=(m>1)?m:1; i<62; i++){
            if(n%i==0){
                cout<<i+1<<endl;
                break;
            }
            else if(i==61){
                cout<<"such number is impossible!"<<endl;
            }
        }

        
    }
    return 0;
}