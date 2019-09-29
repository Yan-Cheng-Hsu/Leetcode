#include <cstdio>
using namespace std;

int main(){
    int a,b,c,d,i,j;
    scanf("%d", &i);
    for(j=0; j<i; j++){
        scanf("%d %d %d %d\n", &a, &b, &c, &d);
        b = a + b + 1;
        c = c + d + 1;
        b = (c+b)*(c-b+1)/2-a-d-1;
        printf("Case %d: %d\n", j+1, b);
    }
    return 0;
}