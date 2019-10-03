#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    double s, d;
    while(cin>>s>>d){
        cout<<fixed<<setprecision(0)<<ceil(sqrt(d*2+s*s-s+0.25)-0.5)<<endl;
    }
    return 0;
}