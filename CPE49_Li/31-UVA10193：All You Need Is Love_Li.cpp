#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    int a,b,c;
    string str;
    cin>>n;
    for(int i=0; i<n; i++){
        a = 0;
        b = 0;
        cin>>str;
        for(int j=0; j<str.length(); j++){
            if(str[j]=='1')      a = a*2+1;
            else if(str[j]=='0') a = a*2;
        }
        cin>>str;
        for(int j=0; j<str.length(); j++){
            if(str[j]=='1')      b = b*2+1;
            else if(str[j]=='0') b = b*2;
        }
        if(a<b){
            a^=b;
            b^=a;
            a^=b;
        }

        while(a%b!=0){
            c = b;
            b = a%b;
            a = c;
        }

        if(b==1) cout<<"Pair #"<<i+1<<": Love is not all you need!"<<endl;
        else     cout<<"Pair #"<<i+1<<": All you need is love!"<<endl;
    }
    return 0;
}