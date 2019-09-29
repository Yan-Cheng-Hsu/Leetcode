#include <iostream>
#include <vector>
#include <sstream>
#include <string>
using namespace std;

int main(){
    stringstream sstr;
    vector<int> pol;
    int x, n, i, ans;
    string str;
    while(cin>>x){
        getline(cin, str);
        getline(cin, str);
        ans = 0;
        pol.resize(0);
        
        sstr.str(str);
        while(sstr>>n){
            pol.push_back(n);
        }
        sstr.clear();

        for(i=0; i<pol.size()-1; i++){
            ans = ans*x + pol[i]*(pol.size()-1-i);
        }
        
        cout<<ans<<endl;
    }
    return 0;
}