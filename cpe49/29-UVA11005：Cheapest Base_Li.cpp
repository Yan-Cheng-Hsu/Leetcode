#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(){
    int cost[36];
    int n, m;
    int a, b, c;
    int min_c;
    string str;
    string ans;
    stringstream sstr;
    cin>>n;
    for(int i=0; i<n; i++){
        cout<<"Case "<<i+1<<":"<<endl;
        for(int j=0; j<36; j++){
            cin>>cost[j];
        }
        cin>>m;
        for(int j=0; j<m; j++){
            cin>>a;
            min_c = 2000000000;
            for(int k=2; k<=36; k++){
                c = 0;
                b = a;
                while(b){
                    c += cost[b%k];
                    b = b/k;
                }
                if(c<min_c){
                    min_c = c;
                    sstr.str("");
                    sstr<<k;
                    sstr>>ans;
                    sstr.clear();
                }
                else if(c==min_c){
                    sstr.str("");
                    sstr<<k;
                    sstr>>str;
                    sstr.clear();
                    ans = ans + " " + str;
                }
            }
            cout<<"Cheapest base(s) for number "<<a<<": "<<ans<<endl;
        }
        if(i!=n-1) cout<<endl;
    }
    return 0;
}