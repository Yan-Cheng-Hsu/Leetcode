#include <cstdio>
#include <cmath>
using namespace std;

int main(){
    int a,b,i,n;
    while(scanf("%d %d", &a, &b)!=EOF){
        if(a==0 && b==0) break;
        n=0;
        for(i=a; i<=b; i++){
            if((int(sqrt(i)))*(int(sqrt(i)))==i) n++;
        }
        printf("%d\n", n);
    }
    return 0;
}