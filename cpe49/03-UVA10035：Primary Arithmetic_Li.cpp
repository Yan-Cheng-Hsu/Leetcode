#include <iostream>
#include <string>
using namespace std;

int main(){
    string a, b;
    int c, n;
    while(cin>>a>>b){
        if(a=="0" && b=="0") break;
        
        a = "0" + a;
        b = "0" + b;
        if(a.length()>b.length()){
            string temp(a.length()-b.length(), '0');
            b = temp + b;
        }
        else if(b.length()>a.length()){
            string temp(b.length()-a.length(), '0');
            a = temp + a;
        }
        
        n = 0;
        c = 0;
        for(int i=a.length()-1; i>=0; i--){
            c = a[i]-'0' + b[i]-'0' + c;
            c = c/10;
            n += c;
        }
        
        if(n==0) cout<<"No carry operation.\n";
        else if(n==1) cout<<"1 carry operation.\n";
        else cout<<n<<" carry operations.\n";
    }
    
    return 0;
}