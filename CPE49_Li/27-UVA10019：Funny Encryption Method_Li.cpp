#include <iostream>
using namespace std;

int main(){
    int n, m, p;
    int b1, b2;
    cin>>n;
    while(cin>>n){
        b1 = 0;
        b2 = 0;
        m = n;
        while(m){
            if(m%2==1) b1++;
            m = m>>1;
        }
        m = n;
        while(m){
            p = m%10;
            while(p){
                if(p%2==1) b2++;
                p = p>>1;
            }
            m = m/10;
        }
        cout<<b1<<" "<<b2<<endl;
    }
    return 0;
}