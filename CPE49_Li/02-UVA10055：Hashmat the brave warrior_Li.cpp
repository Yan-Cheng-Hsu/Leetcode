#include <stdio.h>
using namespace std;

int main(){
    double n, m;
    while(scanf("%lf %lf", &n, &m)!=EOF){
        printf("%lu\n", (unsigned int)( (n>m)?(n-m):(m-n) ));
    }
    
    return 0;
}