#include <cstdio>
using namespace std;

int main(){
    int n;
    int a,b;
    scanf("%d", &n);
    while(scanf("%d %d", &a, &b)!=EOF){
        if((a+b)%2==1 || a<b) printf("impossible\n");
        else printf("%d %d\n", (a+b)/2, (a-b)/2);
    }
    return 0;
}