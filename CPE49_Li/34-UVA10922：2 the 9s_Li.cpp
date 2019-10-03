#include <string>
#include <iostream>
using namespace std;

int main(){
    int n, x, y, i;
    string str;
    while(cin>>str){
        x = 0;
        if(str=="0") break;
        for(i=0; i<str.length(); i++){
            x += str[i]-'0';
        }
        n = 1;
        while(x>9){
            y = 0;
            while(x){
                y += x%10;
                x = x/10;
            }
            x = y;
            n++;
        }
        
        if(x<9) cout<<str<<" is not a multiple of 9."<<endl;
        else    cout<<str<<" is a multiple of 9 and has 9-degree "<<n<<"."<<endl;
    }
    return 0;
}