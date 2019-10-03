#include <cstdio>
using namespace std;

int main(){
    int n, i, a, b;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d\n%d\n", &a, &b);
        if(a%2==0) a++;
        if(b%2==0) b--;
        
        a = (a+b)*(b/2-a/2+1)/2;
        printf("Case %d: %d\n", i+1, a);
    }
    return 0;
}