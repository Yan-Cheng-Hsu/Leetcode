#include <cstdio>
using namespace std;

int main(){
    int n, m;
    while(scanf("%d", &n)!=EOF){
        m = n;
        while(n>=3){
            m += n/3;
            n = n/3 + n%3;
        }
        if(n==2) m++;
        printf("%d\n", m);
        
    }
    return 0;
}