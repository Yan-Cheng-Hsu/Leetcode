#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;

int main(){
    float s, a;
    string str;
    while(cin>>s>>a>>str){
        if(str=="min") a = a/60;
        s = s + 6440.0;
        cout<<fixed<<setprecision(6)<<2*M_PI*s*a/360<<" "<<s*sqrt(2-2*cos(a*M_PI/180))<<endl;
    }
    return 0;
}