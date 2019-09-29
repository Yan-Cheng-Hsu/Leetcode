#include <cstdio>
#include <string>
using namespace std;

int main(){
    string str;
    int x;
    int n;
    while(scanf("%d", &x)!=EOF){
        if(x==0) break;
        
        str = "";
        n = 0;
        while(x){
            if(x%2==1){
                n++;
                str = "1" + str;
            }
            else{
                str = "0" + str;
            }
            x = x>>1;
        }
        printf("The parity of %s is %d (mod 2).\n", str.c_str(), n);
    }
    return 0;
}