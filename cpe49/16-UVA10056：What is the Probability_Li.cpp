#include <cstdio>
#include <cmath>
using namespace std;

int main(){
    int n;
    float a,b,c;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%f %f %f", &a,&b,&c);
        b = 1-b;
        if(b==1) printf("%.4f\n", 0 );
        else     printf("%.4f\n", pow(b,c-1)/(1-pow(b,a))*(1-b) );
    }
    return 0;
}